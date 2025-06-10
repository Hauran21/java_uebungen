package ue04;

/**
 *
 * @author robu
 */
public class DarlehenRechner
{
  //Eingangsgrößen
  private final double kosten;
  //Ausgangsgrößen
  private double darlehen;
  
  public DarlehenRechner(double kosten)
          throws Exception
  {
    this.kosten = kosten;
    
    if(kosten <= 0){
      throw new Exception("Die Kosten dürfen nicht kleiner oder gleich 0 sein!");
    }
    
    rechnen();
  }
  
  private void rechnen(){
    if(kosten <= 100_000.0){
      darlehen = kosten * 0.5;
    }
    else 
      if(kosten <= 300_000.0){
        darlehen = 50_000.0 + (kosten-100_000.0)*0.3;
      }
      else 
        if(kosten <= 500_000.0){
          darlehen = 50_000.0 + 60_000.0 + (kosten-300_000.0)*0.25;
        }
        else 
          if(kosten <= 1_000_000.0){
            darlehen = 50_000.0 + 60_000.0 + 50_000.0 + (kosten-500_000.0)*0.15;
          }
          else{
            darlehen = 50_000.0 + 60_000.0 + 50_000.0 + 75_000.0;
          }
  }
  
  // "getter"-Methode für alle Ausgangsgrößen ("Zaubertaste")
  public double getDarlehen()
  {
    return darlehen;
  }
  
  
}
