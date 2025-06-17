package ue10.calc;

import java.util.ArrayList;
import java.util.List;

/**
 *
 * @author robu
 */
public class PerfekteZahlenRechner
{
  //Eingangsgrößen
  private final int untergrenze, obergrenze;
  //Ausgangsgrößen
  private final List<Integer> perfekteZahlen = new ArrayList<>();
  
  public PerfekteZahlenRechner(int untergrenze, int obergrenze)
    throws Exception
  {
    this.obergrenze = obergrenze;
    this.untergrenze = untergrenze;
    if(untergrenze<2)
      throw new Exception("Untergrenze muss mindestens 2 sein");
    if(obergrenze<untergrenze)
      throw new Exception("Obergrenze muss größer als die Untergrenze sein");
    
    rechnen();
  }
  private boolean isPerfekt(int zahl)
  {
    int summe = 1;
    for(int moeglicherTeiler=2;moeglicherTeiler<=zahl/2;moeglicherTeiler++)
      if (zahl % moeglicherTeiler == 0)
        summe += moeglicherTeiler;
    
    return summe==zahl;
  }
    
  private void rechnen()
  {
    //final long start = System.currentTimeMillis();
    for (int zahl = untergrenze; zahl <= obergrenze; zahl++)
      if(isPerfekt(zahl))
        perfekteZahlen.add(zahl);
    //millis = System.currentTimeMillis()-start;
  }

  public List<Integer> getPerfekteZahlen()
  {
    return perfekteZahlen;
  } 

  
  
  public static void main(String[] args)
  {
    try
    {
      PerfekteZahlenRechner rechner = new PerfekteZahlenRechner(2, 999); //Objekt bauen und rechnen
      for (Integer perfekteZahl : rechner.getPerfekteZahlen())
        System.out.println(perfekteZahl);
    }
    catch (Exception ex)
    {
      ex.printStackTrace();
    }
  }
  
}