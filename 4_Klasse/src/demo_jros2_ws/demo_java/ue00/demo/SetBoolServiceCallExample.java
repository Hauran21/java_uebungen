package ue01.demo;

import id.jros2client.JRos2ClientConfiguration;
import id.jros2client.JRos2ClientFactory;

import pinorobotics.jros2services.JRos2ServicesFactory;
import ue01.srv.SetBoolServiceDefinition;
import ue01.srv.SetBoolRequestMessage;
import ue01.srv.SetBoolResponseMessage;
import pinorobotics.rtpstalk.RtpsTalkConfiguration;

public class SetBoolServiceCallExample {

    public static void main(String[] args) throws Exception {
        var configBuilder = new JRos2ClientConfiguration.Builder();
        
        configBuilder.rtpsTalkConfiguration(
            new RtpsTalkConfiguration.Builder()
                .networkInterface("ens33")
                .build());
        
        try (var client = new JRos2ClientFactory().createClient(configBuilder.build());
             var serviceClient = new JRos2ServicesFactory().createClient(client, new SetBoolServiceDefinition(), "light_left/set"))
        {
            SetBoolRequestMessage request = new SetBoolRequestMessage();
            request.data = true;
            
            while (true)
            {
                SetBoolResponseMessage response = serviceClient.sendRequestAsync(request).get();
                System.out.println("response.success: " + response.success);
                System.out.println("response.message: " + response.message.toString());
                Thread.sleep(1000);
            }
        }
    }
}
