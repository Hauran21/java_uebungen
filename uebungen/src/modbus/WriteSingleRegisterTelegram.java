package modbus;

import com.fazecast.jSerialComm.SerialPort;
import java.util.List;
import java.util.concurrent.TimeUnit;
import serial.SimpleSerial;

public class WriteSingleRegisterTelegram extends AbstractModbusTelegram {

    public WriteSingleRegisterTelegram(
            SimpleSerial serial, int devAdr,
            int regAdr, int value) 
    {
        super(serial, devAdr, 6, calcXmtData(regAdr, value), 8);
    }   
    
   private static byte[] calcXmtData(int regAdr, int value) {
   	final byte[] xmt = new byte[4];
        xmt[0] = getHiByte(regAdr);
        xmt[1] = getLoByte(regAdr);
        xmt[2] = getHiByte(value);
        xmt[3] = getLoByte(value);
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
                serial.setComPortParameters(
                        57600, 8, SerialPort.TWO_STOP_BITS, SerialPort.NO_PARITY);
                serial.setComPortTimeouts(5_000);
                
                final long millis1 = 
                        TimeUnit.MILLISECONDS.convert(System.nanoTime(), TimeUnit.NANOSECONDS);
                
                for(int i=0; i<999_999_999;i++) {
                    final long millis2 = 
                            TimeUnit.MILLISECONDS.convert(System.nanoTime(), TimeUnit.NANOSECONDS);
                    
                    WriteSingleRegisterTelegram wsrt = 
                            new WriteSingleRegisterTelegram(
                                    serial, 2, 2, (int)((millis2-millis1) / 100) % 10_000);
                    
                    wsrt.send();
                    wsrt.receive();
                    Thread.sleep(25);
                }
            }
            catch (Exception ex) { ex.printStackTrace();}
        } 
        catch (Exception ex) { ex.printStackTrace();}
    }
}
