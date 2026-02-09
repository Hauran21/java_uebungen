package modbus;

import com.fazecast.jSerialComm.SerialPort;
import java.util.List;
import serial.SimpleSerial;

/**
 *
 * @author robot
 */
public class WriteSingleCoilTelegram extends AbstractModbusTelegram {

    public WriteSingleCoilTelegram(
            SimpleSerial serial,
            int devAdr,
            int coilAdr,
            boolean value
    ) {
        super(serial, devAdr, 5, calcXmtData(coilAdr, value), 8);
    }

    private static byte[] calcXmtData(int coilAdr, boolean value) {
        final byte[] xmt = new byte[4];
        xmt[0] = getHiByte(coilAdr);
        xmt[1] = getLoByte(coilAdr);
        xmt[2] = value ? (byte) 0xFF : 0;
        xmt[3] = 0;

        return xmt;
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
                
                int lastLedIndex = 0, ledIndex = 0;
                boolean up = true;
               
                
                for (int i = 0; i<1_000;i++)
                {
                    final WriteSingleCoilTelegram tel = 
                        new WriteSingleCoilTelegram(serial, 2, lastLedIndex, false);
                    tel.send();
                    tel.receive();
                    
                    final WriteSingleCoilTelegram tel2 =
                            new WriteSingleCoilTelegram(serial, 2, ledIndex, true);
                    tel2.send();
                    tel2.receive();
                    lastLedIndex = ledIndex;
                    
                    if(up)
                    {
                        if(++ledIndex >= 4) {ledIndex=2; up=false;}
                    }
                    else
                    {
                        if (--ledIndex<0) { ledIndex=1; up=true;}
                    }
                    Thread.sleep(100);
                }
            }
        } catch (Exception ex) {
            ex.printStackTrace();
        }
    }
}
