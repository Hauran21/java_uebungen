package ue11.net;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.net.*;

/**
 *
 * @author robot
 */
public class SimpleServer {
    
    private final int port;
    private ServerSocket serverSocket = null;
    
    public SimpleServer(int port){
        this.port = port; 
    }
    
    private Socket listen() throws IOException {
        return serverSocket.accept();
    }
    
    private String readRequest (Socket socket) throws IOException {
        final  BufferedReader reader = 
            new BufferedReader(
                new InputStreamReader(socket.getInputStream()));
        
        // Versuche Anfrage zu lesen
        
        String line; 
        StringBuilder sbRequest = new StringBuilder();
        while ((line = reader.readLine()) != null)
            sbRequest.append(line).append("\n");
        return sbRequest.toString();
    }
    
    private String createRequest(String request) {
        return "hallo Client! Deine Anfrage war " + request;
    }
    
    void sendResponse () {
        
    }
        
}
