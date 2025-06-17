package ue01;

/**
 *
 * @author robu
 */
public class SpritRechner
{
  //Eingangsgrößen
  private final double gefahreneKm;       //Datenelemente
  private final double verbrauchInLiter;
  //Ausgangsgrößen
  double durchschnittsverbrauch;
  
  /**
   * Erzeugen eines Objekts der Klasse SpritRechner
   * @param gefahreneKm Eingensgröße: Distanz in km
   * @param verbrauchInLiter Eingangsgröße: Verbrauch in Liter
   * @throws Exception Plausibilitätskontrolle
   */
  public SpritRechner(double gefahreneKm, double verbrauchInLiter)
    throws Exception
  {
    this.gefahreneKm = gefahreneKm;
    this.verbrauchInLiter = verbrauchInLiter;
    
    //Plausibilitätskontrolle mit "Exceptions"
    if (verbrauchInLiter < 0.0) 
      throw new Exception("Verbrauch in Liter muss größer gleich 0 sein!"); //IST EIN FEHLER
    
    if (verbrauchInLiter <= 0.0)
      throw new Exception("Gefahrene km müssen größer als 0 sein!");
              
    rechnen();
  }
  
  private void rechnen()//Methode
  {
    durchschnittsverbrauch = verbrauchInLiter / gefahreneKm * 100.0;
  }
  
  public double getDurchschnittsverbrauch()
  {
    return durchschnittsverbrauch;
  }
  
}
