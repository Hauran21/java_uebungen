package ue01.demo;

/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template


TODO: http://pinoweb.freetzi.com/jrosservices/Quick_Start.html
 */
import id.jros2client.JRos2ClientConfiguration;
import id.jros2client.JRos2ClientFactory;

import pinorobotics.jros2services.JRos2ServicesFactory;
import pinorobotics.jrosservices.std_srvs.TriggerServiceDefinition;

import pinorobotics.jrosservices.std_srvs.TriggerRequestMessage;
import pinorobotics.jrosservices.std_srvs.TriggerResponseMessage;
import pinorobotics.rtpstalk.RtpsTalkConfiguration;

public class TriggerServiceCallExample {

    public static void main(String[] args) throws Exception {
        var configBuilder = new JRos2ClientConfiguration.Builder();
        
        configBuilder.rtpsTalkConfiguration(
            new RtpsTalkConfiguration.Builder()
                .networkInterface("ens33")
                .build());
        
        try (var client = new JRos2ClientFactory().createClient(configBuilder.build());
             var serviceClient = new JRos2ServicesFactory().createClient(client, new TriggerServiceDefinition(), "light_left/trigger"))
        {
            TriggerRequestMessage request = new TriggerRequestMessage();
            
            while (true)
            {
                TriggerResponseMessage response = serviceClient.sendRequestAsync(request).get();
                System.out.println("response: " + response.message.data);
                Thread.sleep(1000);
            }
            
        }
        
    }
}

