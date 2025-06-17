/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package ue01.data;

import ue02.data.*;
import java.net.*;
import java.util.*;

import id.jros2client.JRos2ClientConfiguration;
import id.jros2client.JRos2ClientConfiguration.Builder;

//ROS2 Node
import id.jros2client.JRos2Client;
import id.jros2client.JRos2ClientFactory;

//ROS2 Publisher
import id.jrosclient.TopicSubmissionPublisher;
import id.jrosmessages.std_msgs.UInt8MultiArrayMessage;
import java.util.concurrent.ExecutionException;
import java.util.logging.Level;
import java.util.logging.Logger;

//ROS2 Service
import pinorobotics.jros2services.JRos2ServicesFactory;
import pinorobotics.jros2services.JRos2ServiceClient;
import pinorobotics.rtpstalk.RtpsTalkConfiguration;

//Interface Definitions for TurnSignal Service

import ue01.srv.BacklightValueRequestMessage;
import ue01.srv.CameraCmdResponseMessage;
import ue01.srv.CameraCmdServiceDefinition;

import ue01.srv.ColorValuesRequestMessage;
import ue01.srv.ColorValuesResponseMessage;
import ue01.srv.ColorValuesServiceDefinition;

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
        
    }
    
    
    
    private byte[] toByteArray(List<Byte> list)
    {
        byte[] result = new byte[list.size()];
        for (int i = 0; i < list.size(); i++)
        {
            result[i] = list.get(i);
        }
        return result;
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

}
