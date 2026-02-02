package serial;

import com.fazecast.jSerialComm.SerialPort;
import java.io.InputStream;
import java.io.OutputStream;
import java.util.ArrayList;
import java.util.List;

/**
 *
 * @author robot
 */
public class SimpleSerial implements AutoCloseable {
    private final String portName;
    private final SerialPort serialPort;
    private OutputStream outputStream;
    private InputStream inputStream;
    
    public SimpleSerial(String portName) {
        this.portName = portName;
        serialPort = SerialPort.getCommPort(portName);
        outputStream = serialPort.getOutputStream();
        inputStream = serialPort.getInputStream();
    }
    
    public void open() throws Exception {
        if (!serialPort.openPort())
            throw new Exception("error on opening port " + portName);
        // sudo usermod -aG dialout <Benutzername>   
    }
    
    // Wird automatisch aufgerufen durch das implementieren von AutoClosable
    @Override
    public void close() throws Exception {
        inputStream = null;
        outputStream = null;
        
        if(!serialPort.closePort())
            throw new Exception("error on closing port" + portName);
    } 
    
    public final boolean setComPortParameters(
            int newBaudRate, int newDataBits, int newStopBits, int newParity
    )
    {
        return serialPort.setComPortParameters(
                newBaudRate, newDataBits, newStopBits, newParity);
    }
    
    public final boolean setComPortTimeouts(int ms) {
        return serialPort.setComPortTimeouts(
            SerialPort.TIMEOUT_READ_BLOCKING, ms, 0);
    }
    
    public void purge() throws Exception {
        while (inputStream.available() > 0)
            inputStream.read(); 
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

    public OutputStream getOutputStream() {
        return outputStream;
    }

    public InputStream getInputStream() {
        return inputStream;
    }
}
