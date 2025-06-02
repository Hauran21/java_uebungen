/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package Lernen.PytTripLernen1.data;

import java.util.List;

/**
 *
 * @author Rafael
 */
public class NewClass {
    private final int a; 
    private final List<Integer> b; 

    public NewClass(int a, List b) {
        this.a = a;
        this.b = b;
    }

    public int getA() {
        return a;
    }

    public List getB() {
        return b;
    }

    @Override
    public String toString() {
        return "NewClass{" + "a=" + a + ", b=" + b + '}';
    }
    
}
