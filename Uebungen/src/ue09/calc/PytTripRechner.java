package ue09.calc;

import java.util.ArrayList;
import java.util.List;
import ue09.data.PytTrip;

/**
 * Rechnerklasse zur Berechnung aller pytagorischen Tripel
 * bis zu einer vorgegebenen maximalen Laengen der Hypotenuse
 * @author robot
 */
public class PytTripRechner {
  //Eingangsgroessen (n)
  private final int obergrenze;
  //Ausgangsgroessen (n)
  private final List<PytTrip> pytTrips = new ArrayList<>();
  private long millis;

  public PytTripRechner(int obergrenze) 
          throws Exception {

      this.obergrenze = obergrenze;
      if(obergrenze < 1) 
          throw new Exception("Obergrenze muss positiv sein!");

      rechnen();    }

  //in c => time(NULL) -> Anzahl der vergangenen sekunden seit 1.1.1970 00:00 UTC

  private void rechnen() {
    final long zeit1 = System.currentTimeMillis();
    for(int a=1; a<=obergrenze; a++) 
        for(int b=a; b<=obergrenze; b++) 
            for(int c=b; c<=obergrenze; c++) 
                if(a*a + b*b == c*c)
                    pytTrips.add(new PytTrip(a,b,c));
    final long zeit2 = System.currentTimeMillis();
    millis = zeit2 - zeit1;
  }
    
  public long getMillis()
  {
    return millis;
  }
    
    

  public List<PytTrip> getPytTrips() {
      return pytTrips;
  }

  public static void main(String[] args) {
      try {
        final PytTripRechner rechner = new PytTripRechner(3_000);  //Rechner bauen und rechnen
        final List<PytTrip> pytTrips = rechner.getPytTrips();   //Ausgangsgroesse abholen
        System.out.format("%d pythagorische Tripel gefunden! %n",pytTrips.size());
        for(PytTrip pytTrip : pytTrips)
            System.out.println(pytTrip);
        System.out.format("Rechenzeit: %d ms%n%n", rechner.getMillis());
            //System.out.format("%8d %8d %8d %n", 
            //        pytTrip.getA(),pytTrip.getB(),pytTrip.getC());      
      }
      catch (Exception ex) {
        ex.printStackTrace();
      }
  }
}
