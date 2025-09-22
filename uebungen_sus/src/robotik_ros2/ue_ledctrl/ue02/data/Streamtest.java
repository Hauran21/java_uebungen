package ue02.data;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Streamtest {
    public static void main(String[] args) throws IOException {
        try 
            (
            //Alle Streams sind autoclosable. Durch die Verwendung
            //der runden KLammern wrden alle Objekte automatisch am 
            //Ende des Blocks geschlossen
            final BufferedWriter writer = 
                    new BufferedWriter(
                    new OutputStreamWriter(
                    new FileOutputStream("/home/robot/Desktop/test.txt"), "utf8"));
                    //Statt "robot" den user verwenden
            ) 
        {
            writer.write("habicht"); writer.newLine();
            writer.write("Das ist ein wunderbarer Satz"); writer.newLine();
            writer.write("habicht");
        }
        catch(Exception ex) {
            ex.printStackTrace();
        }
        
        try 
            (
                final BufferedReader reader =
                        new BufferedReader(
                        new InputStreamReader(
                        new FileInputStream("/home/robot/Desktop/test.txt"), "utf8"));
            )
            
        {
            String line;
            while((line = reader.readLine()) != null)
                System.out.println(line);
            
        } catch (Exception ex) {
            ex.printStackTrace();
        }       
    }
}
