package ue02.ros.data;


import java.util.List;
import java.util.logging.Level;
import java.util.logging.Logger;
import java.util.ArrayList;
import java.util.concurrent.ExecutionException;

import id.jros2client.JRos2Client;

//ROS2 Publisher
import id.jrosclient.TopicSubmissionPublisher;

//ROS2 Message
import id.jrosmessages.std_msgs.UInt8MultiArrayMessage;

//ROS2 Service
import pinorobotics.jros2services.JRos2ServicesFactory;
import pinorobotics.jros2services.JRos2ServiceClient;

import ue01.data.RobotCtrlROS;

//Interface Definitions for TurnSignal Service
import ue02.ros.srv.CameraCmdRequestMessage;
import ue02.ros.srv.CameraCmdResponseMessage;
import ue02.ros.srv.CameraCmdServiceDefinition;
import ue02.ros.srv.ColorValuesRequestMessage;
import ue02.ros.srv.ColorValuesResponseMessage;
import ue02.ros.srv.ColorValuesServiceDefinition;
import ue02.data.LEDData;


/**
 *
 * @author robu
 */
public class LEDCtrlROS
{
    
    private final RobotCtrlROS nodeRobotCtrl;
    private final JRos2Client rosClient;
    
    private final TopicSubmissionPublisher pubSetLEDs;// 
    private final UInt8MultiArrayMessage msgSetLEDs = new UInt8MultiArrayMessage();

    private final JRos2ServiceClient <CameraCmdRequestMessage, CameraCmdResponseMessage> srvTurnSignalClient;
    private final JRos2ServiceClient <ColorValuesRequestMessage, ColorValuesResponseMessage> srvReadColorsClient;

    public LEDCtrlROS(RobotCtrlROS nodeRobotCtrl)
    {
        this.nodeRobotCtrl = nodeRobotCtrl;
        this.rosClient = nodeRobotCtrl.getRosClient();
        
        pubSetLEDs = new TopicSubmissionPublisher<>(UInt8MultiArrayMessage.class, "/ledctrl");
        rosClient.publish(pubSetLEDs);
        
        srvTurnSignalClient = new JRos2ServicesFactory().createClient(rosClient, new CameraCmdServiceDefinition(), "/camera_cmd");
        srvReadColorsClient = new JRos2ServicesFactory().createClient(rosClient, new ColorValuesServiceDefinition(), "/read_colors");

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
    
    public void publishLEDData(List<LEDData> ledData)
    {
        // Daten aus der Tabelle zusammenbauen
        List<Byte> data = new ArrayList<>();
        for (LEDData led : ledData)
        {
            data.add((byte) led.getPosition());
            data.add((byte) led.getR());
            data.add((byte) led.getG());
            data.add((byte) led.getB());
            data.add((byte) led.getW());
        }
        
        // ROS2 Nachricht erzeugen
        msgSetLEDs.withData(toByteArray(data));
        //ROS2 Nachricht versenden
        pubSetLEDs.submit(msgSetLEDs);
    }
    
    public void callServiceTurnSignal(String cmd, byte side, byte[] color_on, byte[] color_off, byte repetitions)
    {
        try
        {
            final CameraCmdRequestMessage reqTurnSignal = new CameraCmdRequestMessage();
            
            reqTurnSignal.cmd.data = cmd;
            reqTurnSignal.side = side;
            reqTurnSignal.repetitions = repetitions;
            reqTurnSignal.color_on = color_on; //new byte[] {(byte)255, (byte)0, (byte)0, (byte)0};
            reqTurnSignal.color_off = color_off; //new byte[] {(byte)0, (byte)255, (byte)0, (byte)0};
            
            CameraCmdResponseMessage response = srvTurnSignalClient.sendRequestAsync(reqTurnSignal).get();
            System.out.println("response.status: " + response.status);
        } catch (InterruptedException | ExecutionException ex)
        {
            Logger.getLogger(LEDCtrlROS.class.getName()).log(Level.SEVERE, null, ex);
        }
    }
    
    public void callLeftTurnSignal()
    {
        this.callServiceTurnSignal(
                "turn", 
                (byte) 0, 
                new byte[] {(byte)255, (byte)0, (byte)0, (byte)0}, 
                new byte[] {(byte)0, (byte)255, (byte)0, (byte)0}, 
                (byte) 24);
    }
    
    public void callRightTurnSignal()
    {
        this.callServiceTurnSignal(
                "turn", 
                (byte) 1, 
                new byte[] {(byte)255, (byte)0, (byte)0, (byte)0}, 
                new byte[] {(byte)0, (byte)255, (byte)0, (byte)0}, 
                (byte) 24);
    }
    
    public void callLeftDetectSignal()
    {
        this.callServiceTurnSignal(
                "detect", 
                (byte) 0, 
                new byte[] {(byte)0, (byte)0, (byte)255, (byte)0}, 
                new byte[] {(byte)0, (byte)0, (byte)0, (byte)0}, 
                (byte) 24);
    }
    
    public void callRightDetectSignal()
    {
        this.callServiceTurnSignal(
                "detect", 
                (byte) 1, 
                new byte[] {(byte)0, (byte)0, (byte)255, (byte)0}, 
                new byte[] {(byte)0, (byte)0, (byte)0, (byte)0}, 
                (byte) 24);
    }
    
    public byte[] callReadColors()
    {
        byte[] colors = new byte[] {};
        try
        {
            ColorValuesRequestMessage reqReadColors = new ColorValuesRequestMessage();
            
            ColorValuesResponseMessage response = srvReadColorsClient.sendRequestAsync(reqReadColors).get();
            System.out.println("response.status: " + response.status);
            colors = response.colors;
            
        } catch (InterruptedException | ExecutionException ex)
        {
            Logger.getLogger(LEDCtrlROS.class.getName()).log(Level.SEVERE, null, ex);
        }
        return colors;
    }    
    
    public void shutdown()
    {
        try
        {
            srvTurnSignalClient.close();
            srvReadColorsClient.close();
        } catch (Exception e)
        {
            System.err.println("Fehler beim Schließen des ROS2-Service: " + e.getMessage());
        }
    }
}