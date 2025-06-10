/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package ue10a.data;

import java.util.List;

/**
 *
 * @author scheu
 */
public class PerfekteZahl {
       
    private final int zahl;
    private final List<Integer> teiler;
    
    public PerfekteZahl(int zahl, List<Integer> teiler)
    {
        this.zahl = zahl;
        this.teiler = teiler;
    }
    
    public int getZahl()
    {
        return zahl;
    }
    
    public List<Integer> getTeiler()
    {
        return teiler;
    }
    
    @Override
    public String toString()
    {
       String result = String.format("%d = 1", zahl);
       for (Integer t : teiler)
         if (t!=1)
             result = result + "+" + t;
       return result;
    }
   
}