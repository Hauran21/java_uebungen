package ue02;

/**
 *
 * @author robu
 */
public class QuaderRechner
{
  //Eingangsgrößen
  private final double laenge, breite, hoehe;
  //Ausgangsgrößen
  private double volumen, oberflaeche, raumdiagonale;
  
  //Konstruktor
  public QuaderRechner(double laenge, double breite, double hoehe)
    throws Exception
  {
    this.laenge = laenge;
    this.breite = breite;
    this.hoehe = hoehe;
    
    if(laenge <= 0.0)
       throw new Exception("Länge ist kleiner oder gleich als 0");
    if(breite <= 0.0)
       throw new Exception("Breite ist kleiner oder gleich als 0");
    if(hoehe <= 0.0)
       throw new Exception("Höhe ist kleiner oder gleich als 0");
    
    rechnen();
  }
  
  //Rechner Methode
  private void rechnen()
  {
    volumen = laenge * hoehe * breite;
    oberflaeche = 2 * (laenge*breite + laenge*hoehe + breite*hoehe);
    
    final double flaechendiagonale = Math.sqrt(laenge*laenge + breite*breite);
    raumdiagonale = Math.sqrt(flaechendiagonale * flaechendiagonale + hoehe +  hoehe);
  }
  
    //Getter Methode
  public double getVolumen()
  {
    return volumen;
  }
  public double getOberflaeche()
  {
    return oberflaeche;
  }
  public double getRaumdiagonale()
  {
    return raumdiagonale;
  }
  
}
