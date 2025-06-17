/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template

https://github.com/pinorobotics/msgmonster
https://github.com/pinorobotics/jros2services

 */
package ue01.demo;

import id.jros2client.JRos2ClientConfiguration;
import id.jros2client.JRos2ClientFactory;
import id.jrosclient.TopicSubmissionPublisher;
import ue01.msg.Int8Message;

import pinorobotics.rtpstalk.RtpsTalkConfiguration;

/**
 * Creates a new topic and publishes messages to it.
 */
public class DemoPublisherInt8
{

    public static void main(String[] args) throws Exception {
        var configBuilder = new JRos2ClientConfiguration.Builder();
        
        configBuilder.rtpsTalkConfiguration(
            new RtpsTalkConfiguration.Builder()
                .networkInterface("ens33")
                .build());
        
        var client = new JRos2ClientFactory().createClient(configBuilder.build());
        String topicName = "/cmd_drop";
        var publisher = new TopicSubmissionPublisher<>(Int8Message.class, topicName);

        client.publish(publisher);
        Int8Message value = new Int8Message();
        value.data = -1;
        
        while (true) {
            publisher.submit(value);
            System.out.println("Published: " + value.toString());
            Thread.sleep(1000);
        }
    }
}