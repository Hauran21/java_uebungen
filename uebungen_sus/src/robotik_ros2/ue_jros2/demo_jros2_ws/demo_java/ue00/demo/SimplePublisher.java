/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package ue01.demo;

//http://portal2.atwebpages.com/jrosclient/Quick_Start_jros2client.html
//java -cp "<JROSCLIENT_INSTALL_DIR>/libs/*" PublisherApp.java
//java -cp "/home/robu/work/ROBU/jros2client_li/libs/*" SimplePublisher.java
//ros2 topic echo helloRos std_msgs/String

import id.jros2client.JRos2ClientConfiguration;
import id.jros2client.JRos2ClientFactory;
import id.jrosclient.TopicSubmissionPublisher;
import id.jrosmessages.std_msgs.StringMessage;
import pinorobotics.rtpstalk.RtpsTalkConfiguration;

/**
 * Creates a new topic and publishes messages to it.
 */
public class SimplePublisher {

    public static void main(String[] args) throws Exception {
        var configBuilder = new JRos2ClientConfiguration.Builder();
        // run on network interface with name "eth0"
        /*
        configBuilder.rtpsTalkConfiguration(
            new RtpsTalkConfiguration.Builder()
                .networkInterface("lo")
                .build());
        */
        
        configBuilder.rtpsTalkConfiguration(
            new RtpsTalkConfiguration.Builder()
                .networkInterface("ens33")
                .build());
        
        
        // use configBuilder to override default parameters (network interface, RTPS settings etc)
        var client = new JRos2ClientFactory().createClient(configBuilder.build());
        String topicName = "/helloRos";
        var publisher = new TopicSubmissionPublisher<>(StringMessage.class, topicName);
        // register a new publisher for a new topic with ROS
        client.publish(publisher);
        while (true) {
            publisher.submit(new StringMessage().withData("Hello ROS"));
            System.out.println("Published: Hello ROS");
            Thread.sleep(1000);
        }

        // usually we need to close client once we are done
        // but here we keep it open so that subscriber will keep
        // printing messages indefinitely
    }
}