package modbus;

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

    public AbstractModbusTelegram(SimpleSerial serial, int devAdr, 
            int functionCode, byte[] data, int lengthOfAnswer) {
        this.serial = serial;
        this.devAdr = devAdr;
        this.functionCode = functionCode;
        this.data = data;
        this.lengthOfAnswer = lengthOfAnswer;
    }

    @Override
    public void send() throws Exception {
        serial.purge(); // Empfangspuffer leeren
        
        final byte[]  toWrite = newbyte[4 + data.length];
        toWrite[0] = (byte)devAdr;
        toWrite[1] = (byte)functionCode;
        // TODO ...
    }

    @Override
    public byte[] receive() throws Exception {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }
    
}
