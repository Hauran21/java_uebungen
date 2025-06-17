/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package Lernen.PytTripLernen1.calc;

import java.util.ArrayList;
import java.util.List;

/**
 *
 * @author Rafael
 */
public class NewClass {
    private final int a;
    private final List<NewClass> b = new ArrayList<>();
    private long millis = 0L;

    public NewClass(int a) throws Exception {
        this.a = a;
        
        if(a < 10) {
            throw new Exception("Das passt so nicht"); 
        }
        
        rechnen();
    }
    
    private void rechnen()
    {
        final long starttime = System.currentTimeMillis();
        for(int zahl=0; zahl <= a; zahl++) 
        {
            try
            {
                b.add(getzahl(zahl));
            }
            catch(Exception ignore) {}
        }
        millis = System.currentTimeMillis() - starttime;
    }
    
    private NewClass getzahl (int i)
            throws Exception
    {
        //rechnen
        
        if(i == i) {
            //wenns passt
            return new NewClass(i);
        }
        else 
            throw new Exception("passt nicht");
    }

    public List getB() {
        return b;
    }

    public long getMillis() {
        return millis;
    }
    
    
    
        
}
    
    

    
    
    
}
