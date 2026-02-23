package modbus;

import com.fazecast.jSerialComm.SerialPort;
import java.util.List;
import serial.SimpleSerial;

/**
 *
 * @author robot
 */
public class ReadCoilTelegram extends AbstractModbusTelegram {

    private final int startingAddress, quantityOfCoils; //Range

    public ReadCoilTelegram(
            SimpleSerial serial, int devAdr,
            int startingAddress, int quantityOfCoils) 
    {
        super(
            serial, devAdr, 1, 
            calcXmtData(startingAddress, quantityOfCoils),
                5 + quantityOfCoils/8 + ((quantityOfCoils%8>0) ? 1 : 0)
            );

        this.startingAddress = startingAddress;
        this.quantityOfCoils = quantityOfCoils;
    }   
    
    private static byte[] calcXmtData(int startingAddress, int quantityOfCoils) {
        final byte[] xmt = new byte[4]; 
        xmt[0] = getHiByte(startingAddress);
        xmt[1] = getLoByte(startingAddress);
        
        xmt[2] = getHiByte(quantityOfCoils);
        xmt[3] = getLoByte(quantityOfCoils);
        
        return xmt;
    }

    public boolean getCoil(int coilAdr) throws Exception {
        if(coilAdr < startingAddress || coilAdr >= startingAddress+quantityOfCoils) {
            throw new Exception("coil address is outside valid range!");   
        }

        final byte[] rcvData = getRcvData();
        final int 
                byteIndex = (coilAdr - startingAddress) / 8 + 1,
                bitIndex = (coilAdr - startingAddress) % 8,
                maske = 1 << bitIndex;
        
        return (rcvData[byteIndex] & maske) > 0;
    }
            
    public static void main(String[] args) {
        try {
            final List<String> portNames = SimpleSerial.findSerialPortNames();
            for (final String portName : portNames) {
                System.out.println(portName);
            }
            System.out.format("%d Schnittstellen gefunden!%n", portNames.size());

            try (final SimpleSerial serial = new SimpleSerial("ttyUSB0"))
            {
                serial.open();
                serial.setComPortParameters(57600, 8, SerialPort.TWO_STOP_BITS, SerialPort.NO_PARITY);
                serial.setComPortTimeouts(5_000);
                
                WriteSingleCoilTelegram wsct = 
                        new WriteSingleCoilTelegram(serial, 2, 1, true);
                wsct.send();
                wsct.receive();
                
                wsct = 
                        new WriteSingleCoilTelegram(serial, 2, 3, true);
                wsct.send();
                wsct.receive();
                
                final ReadCoilTelegram rct = new ReadCoilTelegram(serial, 2, 0, 4);
                rct.send();
                rct.receive();
                
                for (int coilAdr=0; coilAdr<4; coilAdr++) {
                    System.out.format("coil %d 0 %b%n",coilAdr, rct.getCoil(coilAdr));
                }
            }
        } catch (Exception ex) {
            ex.printStackTrace();
        }
    }
}
