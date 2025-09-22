package ue00.demo;

/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template


TODO: http://pinoweb.freetzi.com/jrosservices/Quick_Start.html
 */
import id.jros2client.JRos2ClientConfiguration;
import id.jros2client.JRos2ClientFactory;

import pinorobotics.jros2services.JRos2ServicesFactory;
import pinorobotics.rtpstalk.RtpsTalkConfiguration;

import ue00.srv.DemoMotorRequestMessage;
import ue00.srv.DemoMotorResponseMessage;
import ue00.srv.DemoMotorServiceDefinition;


public class MotorServiceCallExample {

    public static void main(String[] args) throws Exception {
        var configBuilder = new JRos2ClientConfiguration.Builder();
        
        configBuilder.rtpsTalkConfiguration(
            new RtpsTalkConfiguration.Builder()
                .networkInterface("ens33")
                .build());
        
        try (var client = new JRos2ClientFactory().createClient(configBuilder.build());
             var serviceClient = new JRos2ServicesFactory().createClient(client, new DemoMotorServiceDefinition(), "motor1/set"))
        {
            DemoMotorRequestMessage request = new DemoMotorRequestMessage();
            request.enable=true;
            while (true)
            {
                request.enable=!request.enable;
                DemoMotorResponseMessage response = serviceClient.sendRequestAsync(request).get();
                System.out.println("response: " + response.status);
                Thread.sleep(1000);
            }
            
        }
        
    }
}

