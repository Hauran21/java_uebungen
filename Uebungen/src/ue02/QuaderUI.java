package ue02;

import java.util.NoSuchElementException;
import java.util.Scanner;

/**
 *
 
@author robu*/
public class QuaderUI
{
  //Eingangsvariablen
  private double laenge, breite, hoehe;
  //Ausgangsvariablen
  double volumen, oberflaeche, raumdiagonale;
  
  
  public QuaderUI()
  {
    try{
      eingabe();
      rechnen();
      ausgabe();
    }
    catch(NoSuchElementException ex){
      System.out.println("Falscher Zahlentyp!");
    }
    catch(Exception ex){
      System.out.println("Fehler:" + ex.getMessage());
    }
      
  }
  
  private void eingabe(){
    System.out.println("Rechnen");
    System.out.println("==============");
    
    Scanner scanner = new Scanner(System.in);
    
    System.out.println("Länge:");
    laenge = scanner.nextDouble();
            
    System.out.println("Breite:");
    breite = scanner.nextDouble();
    
    System.out.println("Höhe");
    hoehe = scanner.nextDouble();
  }
 
  private void rechnen() throws Exception{
    volumen = new QuaderRechner(laenge, breite, hoehe).getVolumen();
    oberflaeche = new QuaderRechner(laenge, breite, hoehe).getOberflaeche();
    raumdiagonale = new QuaderRechner(laenge, breite, hoehe).getRaumdiagonale();
  }
  
  private void ausgabe(){
    System.out.format("Volumen: %.2f Oberfläche: %.2f Raumdiagonale: %.2f",volumen, oberflaeche, raumdiagonale);
  }

  public static void main(String[] args)
  {
    new QuaderUI();
  }
}

