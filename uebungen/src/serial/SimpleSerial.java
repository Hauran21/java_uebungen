package serial;

import com.fazecast.jSerialComm.SerialPort;
import java.util.ArrayList;
import java.util.List;

/**
 *
 * @author robot
 */
public class SimpleSerial {
    private final String portName;
    private final SerialPort serialPort;
    
    public SimpleSerial(String portName) {
        this.portName = portName;
        serialPort = SerialPort.getCommPort(portName);
    }
    
    public void open() {
        // TODO
    }
    
    public void close() {
        // TODO
    }
    
    public static List<String> findSerialPortNames() {
        final List<String> portNames = new ArrayList<>();
        
        final SerialPort[] serialPorts = SerialPort.getCommPorts();
        
        for (SerialPort serialPort : serialPorts)
            portNames.add(serialPort.getSystemPortName());
        
        return portNames;
    }
    
    public static void main(String[] args) {
        final List<String> portNames = findSerialPortNames();
        
        System.out.format("Ich habe %d serielle Schnittstellen gefunden! %n",
                portNames.size());
        
        for (String portName : portNames)
            System.out.println(portNames);
    }
}
