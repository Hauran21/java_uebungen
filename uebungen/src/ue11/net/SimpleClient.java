package ue11.net;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.net.InetAddress;
import java.net.Socket;

/**
 *
 * @author robot
 */
public class SimpleClient {
    
    public static String sendRequestandReceiveResponse(
        String host, int port, String request) throws IOException {
        
        // Namensauflösung => Host name => Ip Adresse (DNS)
        final InetAddress inetAddress = InetAddress.getByName(host);
            
        try (Socket socket = new Socket(inetAddress, port)) {
            // %%%% REQUEST %%%%
           
            final BufferedWriter writer =
                new BufferedWriter(
                    new OutputStreamWriter(socket.getOutputStream(), "utf8"));
            
            writer.write(request);
            writer.newLine();
            writer.newLine();
            writer.flush();
            
            // %%%% RESPONSE %%%%
            final  BufferedReader reader = 
                    new BufferedReader(
                        new InputStreamReader(socket.getInputStream()));

            // Versuche Antwort zu lesen#
            String line;
            StringBuilder sbResponse = new StringBuilder();

            while ((line = reader.readLine()) != null)
                sbResponse.append(line).append("\n");
            return sbResponse.toString();
        }
        catch (Exception ex) {
            ex.printStackTrace();
        }
    }
    
    public static void main(String[] args) {
        /*
        try {
            final String response = 
                    SimpleClient.sendRequestandReceiveResponse("www.htl-kaindorf.at", 80, "GET /index.html HTTP/1.0");
            System.out.println(response);       
             
        } catch (Exception e) {
            e.printStackTrace();
        }
        */
        
        /*
        try {
            // Namensauflösung => Host name => Ip Adresse (DNS)
            final InetAddress adr1 = 
                    InetAddress.getByName("www.htl-kaindorf.at");
            System.out.println("IP Address: " + adr1.getHostAddress());
            System.out.println("Domain: " + adr1.getHostName());
            
            final InetAddress adr2 = 
                    InetAddress.getByName("95.143.172.188");
            System.out.println("IP Address: " + adr2.getHostAddress());
            System.out.println("Domain: " + adr2.getHostName());
            
            // TCP-Verbindung zum Server aufbauen
            try (Socket socket = new Socket(adr1, 80)) {
                System.out.println("Verbindung aufgebaut!");
                
                // %%%% REQUEST %%%%
                // Erstelle einen Writer, um Text zum Server senden zu können
                final BufferedWriter writer =
                        new BufferedWriter(
                            new OutputStreamWriter(socket.getOutputStream(), "utf8"));
                
                // Text senden
                writer.write("GET /index.html HTTP/1.0");
                writer.newLine();
                writer.newLine();
                writer.flush();
                
                // %%%% RESPONSE %%%%
                // Erstelle einen Reader, um Antworttext vom Server lesen zu können
                final  BufferedReader reader = 
                        new BufferedReader(
                            new InputStreamReader(socket.getInputStream()));
                
                // Versuche Antwort zu lesen#
                String line;
                StringBuilder sbResponse = new StringBuilder();
                
                while ((line = reader.readLine()) != null)
                    sbResponse.append(line).append("\n");
                final String response = sbResponse.toString();
                
                System.out.println("sigma");
            }
            //socket.close();
            
        } catch (Exception ex) {
            ex.printStackTrace();
        }
        */
    }
}
