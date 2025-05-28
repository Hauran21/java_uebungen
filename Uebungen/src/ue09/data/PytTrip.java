/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package ue09.data;

/**
 * design pattern "Datenerhaltungsklasse"
 * design pattern "immutable"
 * @author robot
 */
public class PytTrip {
    // Komponenten
    private final int a;
    private final int b;
    private final int c;

    public PytTrip(int a, int b, int c) {
        this.a = a;
        this.b = b;
        this.c = c;
    }

    
    public int getA() {
        return a;
    }

    public int getB() {
        return b;
    }

    public int getC() {
        return c;
    }

    public Object[] size() {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }
    
    @Override // Annotation "Überlagerung"
    public String toString() {
      return String.format("%8d %8d %8d", a, b, c);
    }
}
