package modbus;

import serial.SimpleSerial;

/**
 *
 * @author robot
 */
public class WriteSingleCoilTelegram extends AbstractModbusTelegram {
    
    public WriteSingleCoilTelegram(
        SimpleSerial serial,
        int devAdr, 
        //int functionCode, ist beim Single coil immer 5
        byte[] data
        //int lengthOfAnswer immer 8
    ) 
    {
        super(serial, devAdr, 5, calcXmtData(int coilAdr, true), 8);
    }
    
    private static byte[] calcXmtData(int coilAdr, boolean value) {
        // TODO
        return xmt; 
    }
}
