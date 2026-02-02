package modbus;

/**
 *
 * @author robot
 */
public interface Telegram { 
    void send() throws Exception;
    byte[]  receive() throws Exception;
}
