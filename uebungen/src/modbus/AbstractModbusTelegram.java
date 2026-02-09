package modbus;

import java.io.InputStream;
import java.io.OutputStream;
import org.xml.sax.InputSource;
import serial.SimpleSerial;

/**
 *
 * @author robot
 */
public class AbstractModbusTelegram implements Telegram {
    
    private final SimpleSerial serial;
    private final int
            devAdr,             // device adress
            functionCode;       // funcion code
    private final byte[] data;  // Zu versendende Daten
    private final int 
            lengthOfAnswer;     // Länge der Antwort in Bytes
    private final byte[] rcvData;
    
    public AbstractModbusTelegram(SimpleSerial serial, int devAdr, 
            int functionCode, byte[] data, int lengthOfAnswer) {
        this.serial = serial;
        this.devAdr = devAdr;
        this.functionCode = functionCode;
        this.data = data;
        this.lengthOfAnswer = lengthOfAnswer;
        rcvData = new byte[lengthOfAnswer-4];
    }
    
    private static int calcCrc(byte[] data, int start, int cnt) {
        int crc = 0xFFFF;
        
        for (int i=start; i<start+cnt; i++) {
            crc = crc16 (crc, data[i]);
        }
        return crc;
    }
      
    private static int crc16(int crc, int data) {
        final int poly16 = 0xA001;
        int lsb; 
        crc = ((crc ^ data) | 0xFF00) & (crc | 0x00FF);
        for (int i=0; i<8; i++) {
            lsb = (crc & 0x0001);
            crc >>= 1;
            if (lsb != 0) {
                crc ^= poly16;
            }
        }
        return crc;
    }
    
    protected static byte getLoByte(final int data) {
        return (byte)(data & 0x00FF);
    }
    
    protected static byte getHiByte(final int data) {
        // 8 bits nach rechts schrieben
        return getLoByte(data >> 8);
    }

    @Override
    public void send() throws Exception {
        serial.purge(); // Empfangspuffer leeren
        
        final byte[]  toWrite = new byte[4 + data.length];
        toWrite[0] = (byte)devAdr;
        toWrite[1] = (byte)functionCode;
        
        System.arraycopy(data, 0, toWrite, 2, data.length);
        
        final int crc16 = calcCrc(toWrite, 0, data.length+2);
        
        toWrite[toWrite.length-2] = getLoByte(crc16);
        toWrite[toWrite.length-1] = getHiByte(crc16); 
                
        final OutputStream os = serial.getOutputStream();
        os.write(toWrite);
        os.flush(); //Warten bis nix mehr gebuffert ist
        
        log("XMT", toWrite);
    }

    @Override
    public byte[] receive() throws Exception {
        final byte[] buffer = new byte[lengthOfAnswer];
        final InputStream is = serial.getInputStream();
        
        int toRead = lengthOfAnswer;
        while (toRead > 0) {
            int read = is.read(buffer, lengthOfAnswer-toRead, toRead);
            
            if (read > 0) 
                toRead -= read;
            else 
                throw new Exception("No more bytes to read ...");
        } 
        
        // Plausibilitätskontrolle
        if (buffer[0] != devAdr)
            throw new Exception("Received wrong device address");
        
        if (buffer[1] != functionCode) 
            throw new Exception("Received wrong function code");
        
        int crc16 = calcCrc(buffer, 0, buffer.length-2);
        if (
                buffer[buffer.length-2] != getLoByte(crc16) ||
                buffer[buffer.length-1] != getHiByte(crc16)
           )
            throw new Exception("Received illegal crc16");
        
        System.arraycopy(buffer, 2, rcvData, 0, rcvData.length);
        
        log("RCV", buffer);
        
        return rcvData;
    }
    
    private void log(String what, byte[] data) {
        System.out.print(what+":");
        for(byte b : data)
            System.out.format(" %02X", b);
        System.out.println("");
    }

    protected byte[] getRcvData() {
        return rcvData;
    }
}
