/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package ue02.data;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.util.*;

/**
 *
 * @author robu
 */
public class LEDConfig
{
    private final List<LEDData> leds = new ArrayList<>();

    public List<LEDData> getLEDs()
    {
        return leds;
    }

    public int size()
    {
        return leds.size();
    }

    public boolean add(LEDData e)
    {
        return leds.add(e);
    }

    public LEDData get(int index)
    {
        return leds.get(index);
    }

    public LEDData set(int index, LEDData element)
    {
        return leds.set(index, element);
    }

    public LEDData remove(int index)
    {
        return leds.remove(index);
    }

    // Schreiben/Lesen
    public void writeTo(BufferedWriter writer) throws Exception
    {
        for (LEDData leddata : leds)
            leddata.writeTo(writer);
    }

    public void readFrom(BufferedReader reader) throws Exception
    {
        leds.clear();
        while(true)
        {
            try
            {
                leds.add(new LEDData(reader));
            }
            catch (Exception ignore)
            { 
                break;
            }
        }
    }
    
    public void readFrom(byte[] config) throws Exception
    {
        final int LED_CONFIG_LENGTH=5;
        
        leds.clear();
        if (config.length % LED_CONFIG_LENGTH != 0)
            throw new Exception("LED-Konfiguration hat eine ungültige Länge!");

        for (int i = 0; i < config.length; i+=LED_CONFIG_LENGTH)
            leds.add(new LEDData(
                    config[i+0] & 0xFF, 
                    config[i+1] & 0xFF, 
                    config[i+2] & 0xFF, 
                    config[i+3] & 0xFF, 
                    config[i+4] & 0xFF));
    }
    


}
