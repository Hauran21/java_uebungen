package ue11.net;

import java.io.*;
import java.net.*;
import java.nio.charset.StandardCharsets;

/**
 *
 * @author robot
 */
public class SimpleServer {
    
    private final int port;
    private ServerSocket serverSocket = null;
    private Thread handleRequestThread = null;
    
    public SimpleServer(int port){
        this.port = port; 
    }
    
    private class HandleRequestThread extends Thread {
        @Override
        public void run() {
            while (!isInterrupted()) {
                try {
                    handleRequest();
                    
                } catch (SocketTimeoutException ignore) { }    
                catch (Exception ex) {
                    ex.printStackTrace();
                }
            }
        }
    }
    
    public void start() throws IOException {
        serverSocket = new ServerSocket(port);
        serverSocket.setSoTimeout(1_000);
        (handleRequestThread = new HandleRequestThread()).start();
    }
    
    public void stop() throws Exception {
        if (serverSocket != null) {
            handleRequestThread.interrupt();
            handleRequestThread.join();
            serverSocket.close();
        }
    }
    
    private Socket listen() throws IOException {
        return serverSocket.accept();
    }
    
    private String readRequest (Socket socket) throws IOException {
        final  BufferedReader reader = 
            new BufferedReader(
                new InputStreamReader(socket.getInputStream(), StandardCharsets.UTF_8));
        
        // Versuche Anfrage zu lesen
        
        String line; 
        StringBuilder sbRequest = new StringBuilder();
        while ((line = reader.readLine()) != null && !line.isEmpty())
            sbRequest.append(line).append("\n");
        return sbRequest.toString();
    }
    
    private String createResponse(String request) {
        return "hallo Client! Deine Anfrage war " + request;
    }
    
    void sendResponse (Socket socket, String response) throws Exception {
        try (
            final BufferedWriter writer =
                new BufferedWriter(
                    new OutputStreamWriter(socket.getOutputStream(), StandardCharsets.UTF_8))
        )
        {
            writer.write(response);
            writer.newLine();
            writer.newLine();
            writer.flush();
            socket.shutdownOutput();
        }
    }
    
    private void handleRequest() throws Exception {
        try (final Socket socket = listen()) {
            final String request = readRequest(socket);
            final String response = createResponse(request);
            sendResponse(socket, response);
        }
    }
    
    public static void main(String[] args) {

        try {
            final SimpleServer server = new SimpleServer(4711);
            server.start();
            // server.handleRequest();
            Thread.sleep(30_000);
            server.stop();

        } catch (Exception ex) {
            ex.printStackTrace();
        }
    }
    
}
