package ue03;

/**
 *
 * @author robu
 */
public class QuadrantRechner
{
  //Eingangsgrößen
  private final double x;
  private final double y;
  //Ausgangsgrößen
  int quadrant;
  String beschreibung;
  
  public QuadrantRechner(double y, double x)
    throws Exception
  {
    this.x = x;
    this.y = y;
    
    if(x == 0.0 && y == 0.0){
      throw new Exception("Der Punkt darf sich nicht im Nullpunkt befinden!");
    }
    
    rechnen();
  }
  
  private void berechnenQuadrant(){
    if(x>0)
      if(y>0)
        quadrant = 1;
      else
        quadrant = y<0 ? 4 : 5; //wenn y kleiner als 0 ist "4" sonst "5"
    else
      if(y<0)
        if(y>0)
          quadrant = 2;
        else
          quadrant = y<0 ? 3 : 5;
      else
        quadrant = y!=0 ? 6 : 7;
  }
  
  private void berechnenBeschreibung(){
    beschreibung = switch (quadrant) // "enhanced switch"
    {
      case 1, 2, 3, 4 -> String.format(
              "Der Punkt liegt um q. Quadranten", quadrant);
      case 5 -> "Der Punkt liegt auf der x-Achse";
      case 6 -> "Der Punkt liegt auf der y-Achse";
      case 7 -> "Der Punkt liegt im Koordinatenursprung";
      default -> "Sould not see me ...";
    };
    
    /* SWITCH IN C
    switch(quadrant){ 
      case 1: 
      case 2:
      case 3:
      case 4: beschreibung = String.format(
              "Der Punkt liegt um q. Quadranten", quadrant); break;
      case 5: beschreibung = "Der Punkt liegt auf der x-Achse"; break;
      case 6: beschreibung = "Der Punkt liegt auf der y-Achse"; break;
      case 7: beschreibung = "Der Punkt liegt im Koordinatenursprung"; break;
      default: beschreibung = "Sould not see me ..."; break;
      
    }
    */
  }
  
  private void rechnen(){
    berechnenQuadrant();
    berechnenBeschreibung();
  }
  
}
