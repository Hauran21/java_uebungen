package ue08.test;

import java.util.*;

/**
 *
 * @author robot
 */
public class CollcetionTest {
    
    public static void main(String[] args) {
        /*
        // *** 1.VERSION ***
        
        ArrayList<Double> liste = new ArrayList<Double>(); //Liste für Double bauen
        
        for(int i=0; i<10;i++) { //Wiederholt etwas 10 mal
            double zz = Math.random() * 200.0 + 50; // Zufallszahl "zz" zwischen 50 und 250 erzeugen
            Double wrapper = new Double(zz); //"wrapping"
            liste.add(wrapper); //in das Ende der collection anfügen
        }
        
        Iterator<Double> iterator = liste.iterator(); // Hole Iterator zum Iterieren
        while(iterator.hasNext()){ //Benütze den Iteratorc            
            Double wrapper = iterator.next(); //Hole das nächste Objekt
            final double zz = wrapper.doubleValue(); //"unwrapping
            System.out.println(zz);
        }
        */
        
        /*
        // *** 2.VERSION 
        ArrayList<Double> liste = new ArrayList<>(); //Liste für Double bauen
        
        for(int i=0; i<10;i++) { //Wiederholt etwas 10 mal
            liste.add(Math.random() * 200.0 + 50); // "Autowrapping"
        }
        
        Iterator<Double> iterator = liste.iterator(); // Hole Iterator zum Iterieren
        while(iterator.hasNext()){ //Benütze den Iteratorc            
            System.out.println(iterator.next()); //"Auto unwrapping"
        }
        */
        
        // *** 3.VERSION ***
        List<Double> liste = new LinkedList<>(); // Die linke Liste kann jede Liste sein -> in diese, Fall "LinkedList"
        
        for(int i=0; i<10;i++) { //Wiederholt etwas 10 mal
            liste.add(Math.random() * 200.0 + 50); // "Autowrapping"
        }
        
        for(double zahl : liste) { // "for each"-Schleife
            System.out.println(zahl);
        }
    }    
}