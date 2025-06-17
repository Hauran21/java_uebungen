package ue01;

import java.util.NoSuchElementException;
import java.util.Scanner;

/**
 *
 * @author robu
 */
public class SpritUI
{
  //Eingangsgrößen
  private double gefahreneKm;       //Datenelemente
  private double verbrauchInLiter;
  //Ausgangsgrößen
  double durchschnittsverbrauch;
  
  public SpritUI() //Konstruktor
  {
    try
    {
      eingabe();  //EVA-Prinzip
      rechnen();
      ausgabe();
    }
    catch (NoSuchElementException ex)
    {
      System.out.println("Fehler aufgetreten: Falsches Zahlenformat!");
    }
    catch (Exception ex)
    {
      System.out.println("Fehler ist aufgetreten: "+ ex.getMessage());
      ex.printStackTrace();
    }
  }
  
  private void eingabe()
  {
   //überschrift ausgeben
    System.out.println("Berechnung des Durchschnittsverbrauchs eines Verbrennungsmotors");
    System.out.println("===============================================================");
    System.out.println("");
    
    //Werte eingeben
    Scanner scanner = new Scanner(System.in);  
    System.out.print("Gefahrene km: ");  //Hinweistext ausgeben
    gefahreneKm = scanner.nextDouble();
    System.out.print("Verbrauch in Liter: ");
    verbrauchInLiter = scanner.nextDouble();
  }
  
  private void rechnen()
    throws Exception //wirft die exception weiter in den konstruktor
  {
    durchschnittsverbrauch = new SpritRechner(gefahreneKm, verbrauchInLiter)
            .getDurchschnittsverbrauch();
  }
  
  private void ausgabe()
  {
    System.out.println("");
    System.out.format("Der Durchschnittsverbrauch beträgt %.2f l/100km%n%n", durchschnittsverbrauch);
  }
  
  public static void main(String[] args)
  {
    new SpritUI(); // Objekt der UI-Klasse erstellen
    // Namenloses Objekt
  }
  
}
