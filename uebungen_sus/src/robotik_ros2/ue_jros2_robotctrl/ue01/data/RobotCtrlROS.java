/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package ue01.data;

import java.net.*;
import java.util.*;

import id.jros2client.JRos2ClientConfiguration;
import id.jros2client.JRos2ClientConfiguration.Builder;

//ROS2 Node
import id.jros2client.JRos2Client;
import id.jros2client.JRos2ClientFactory;

//ROS2 Publisher
import pinorobotics.rtpstalk.RtpsTalkConfiguration;

//Interface Definitions for TurnSignal Service


/**
 *
 * @author robu
 */

public class RobotCtrlROS
{
    private final Builder configBuilder = new JRos2ClientConfiguration.Builder();
    
    private final JRos2Client rosClient;
    
    public RobotCtrlROS()
    {        
        //String iface = System.getenv().getOrDefault("ROS2_NETWORK_INTERFACE", "ens33");
        String iface = System.getenv().get("ROS2_NETWORK_INTERFACE");
        if (iface == null)
        {
            try
            {
                iface = getFirstNonLoopbackInterface();
            } catch (SocketException e)
            {
                throw new RuntimeException("Keine Netzwerkschnittstelle gefunden!", e);
            }
        }
        
        System.out.println("Netzwerkschnittselle: " + iface);
        configBuilder.rtpsTalkConfiguration(
                new RtpsTalkConfiguration.Builder()
                        .networkInterface(iface).build());
        
        rosClient = new JRos2ClientFactory().createClient(configBuilder.build());
    }
     
    public void shutdown()
    {
        try
        {
            rosClient.close();  // Beendet den ROS2-Client ordentlich
        } catch (Exception e)
        {
            System.err.println("Fehler beim Schließen des ROS2-Clients: " + e.getMessage());
        }
    }
    
    public static String getFirstNonLoopbackInterface() throws SocketException
    {
        Enumeration<NetworkInterface> nets = NetworkInterface.getNetworkInterfaces();
        for (NetworkInterface netint : Collections.list(nets)) {
            if (!netint.isLoopback() && netint.isUp()) {
                return netint.getName();
            }
        }
        return "lo"; // Fallback
    }

    public JRos2Client getRosClient()
    {
        return rosClient;
    }

    
}
