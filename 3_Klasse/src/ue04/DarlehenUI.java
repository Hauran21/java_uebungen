package ue04;

import java.util.NoSuchElementException;
import java.util.Scanner;

/**
 *
 * @author robu
 */
public class DarlehenUI
{
  //Eingangsgrößen
  private double kosten;
  //Ausgangsgrößen
  private double darlehen;
  
  public DarlehenUI()
  {
    try{
      eingabe();
      rechnen();
      ausgabe();
    }
    catch(NoSuchElementException ex){
      System.out.println("Falsches Zahlenformat!!");
    }
    catch(Exception ex)
    {
      System.out.println("Fehler ist aufgetreten: "+ ex.getMessage());
    }
    
  }
  
  private void eingabe(){
    System.out.println("Berechnug des Lehens:");
    System.out.println("=====================");
    System.out.println("");
    
    //Werte eingeben
    Scanner scanner = new Scanner(System.in);
    System.out.print("Kosten:");
    kosten = scanner.nextDouble();
  }
  
  private void rechnen()
    throws Exception
  {
    darlehen = new DarlehenRechner(kosten).getDarlehen();
  }
  
  private void ausgabe(){
    System.out.println("");
    System.out.format("Die Lehenshöhe beträgt %.2f €", darlehen);
  }
  
  public static void main(String[] args)
  {
    new DarlehenUI();
  }
  
  
}
