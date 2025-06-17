package ue01;

/**
 *
 * @author robu
 */
public class SpritRechnerTester
{
  public static void main(String[] args)
  {
    try
    {
      SpritRechner spritRechner = new SpritRechner(997.0, -55.0);
      System.out.format("Durchschnittsverbrauch: %.2f%n", spritRechner.getDurchschnittsverbrauch());
    }
    catch (Exception ex) //fängt in die variable "ex" den throw auf
    {
      System.out.println("Fehler ist aufgetreten: " + ex.getMessage());
      ex.printStackTrace(); //gibt die Stelle vom Fehler aus
    }
  }
}