/*
Aufgabenstellung:
Es ist ein Programm zu erstellen, mit dessen Hilfe aus beliebig vielen 
positiven doppelgenauen Fließkomma-zahlen arithmetisches Mittel und 
Standartabweichung zu berechnen und auszugeben sind.
*/

package ue08.calc;

import java.util.*;

/**
 *
 * @author robot
 */
public class StatistikRechner {
    // Eingangsgrößen
    private final List<Double> liste;
    //Ausgangsgrößen
    private double durchschnitt, stdAbw;

    public StatistikRechner(List<Double> liste) throws Exception {
        this.liste = liste;
        if(liste.size() < 2)
            throw new Exception("Mindestens zwei Zahlen werden für die Berechnung benötigt!");
        
        rechnen();
    }
    
    private void berechneDurchschnitt() {
        double summe = 0.0;
        
        for(double zahl : liste) {
            summe += zahl;
        }
        durchschnitt = summe / liste.size();
    }
    
    private void berechneStdAbw() {
        double summe = 0.0;
        
        for(double zahl : liste) {
                summe += (durchschnitt - zahl) * (zahl - durchschnitt); //Verwendet man statt "pow"
        }
        stdAbw = Math.sqrt(summe / (liste.size()-1));
    }
    
    private void rechnen() {
        berechneDurchschnitt();
        berechneStdAbw();
    }

    public double getDurchschnitt() {
        return durchschnitt;
    }

    public double getStdAbw() {
        return stdAbw;
    }

    public static void main(String[] args) {
        
        try {
            final List<Double> zahlen = new ArrayList<>(); // Liste erzeugen
            //zahlen.add(3.0); // Liste befüllen
            //zahlen.add(4.0);
            //zahlen.add(5.0);
            //zahlen.add(6.0);
            final StatistikRechner rechner = new StatistikRechner(zahlen);
           
            final double
                durchschnitt = rechner.getDurchschnitt(),
                stdAbw = rechner.getStdAbw();
            System.out.format(
                "Durchschnitt: %12.3f%n" +
                "StdAbw:       %12.3f%n", durchschnitt, stdAbw);
        }
        catch (Exception ex) {
            ex.printStackTrace();
        }
    }
 
}
