package ue10a.calc;

import ue10.calc.*;
import java.util.*;
import ue10a.data.PerfekteZahl;

/**
 *
 * @author werner
 */
public class PerfekteZahlenRechnerVersion2
{
  // Eingangsgrößen
  private final int untergrenze, obergrenze;
  // Ausgangsgröße(n)
  private final List<PerfekteZahl> perfekteZahlen = new ArrayList<>();
  private long millis = 0L;

  public PerfekteZahlenRechnerVersion2(int untergrenze, int obergrenze)
    throws Exception
  {
    this.untergrenze = untergrenze;
    this.obergrenze = obergrenze;
    if (untergrenze<2)
      throw new Exception("Untergrenze muss mindestens 2 sein");
    if (obergrenze<untergrenze)
      throw new Exception("Obergrenze darf nicht kleiner Untergrenze sein");
    rechnen();
  }

  private PerfekteZahl getPerfekteZahl (int zahl)
          throws Exception
  {
    final List<Integer> teiler = new ArrayList<>();
    int summe = 1;
    teiler.add(1);
    for (int moeglicherTeiler=2;moeglicherTeiler<=zahl/2;moeglicherTeiler++)
      if (zahl % moeglicherTeiler == 0)
      {
        summe += moeglicherTeiler;
        teiler.add(moeglicherTeiler); 
      }
    if  (summe==zahl)
        return new PerfekteZahl(zahl, teiler);
    else
        throw new Exception("keine perfektezahl");
  }
  
  private void rechnen()
  {
    final long start = System.nanoTime();
    for (int zahl=untergrenze;zahl<=obergrenze;zahl++)
        try
        {
            perfekteZahlen.add(getPerfekteZahl(zahl));
        }
        catch (Exception ignore) {}
    millis = (System.nanoTime()-start + 500_000) / 1_000_000;
  }

  public List<PerfekteZahl> getPerfekteZahlen()
  {
    return perfekteZahlen;
  }

  public long getMillis()
  {
    return millis;
  }

  // PSVM zum testen hinzugefügt
  public static void main(String[] args)
  {
    try
    {
      PerfekteZahlenRechnerVersion2 rechner = new PerfekteZahlenRechnerVersion2(2, 999);  // Objekt bauen und rechnen
      for (PerfekteZahl perfekteZahl : rechner.getPerfekteZahlen())
        System.out.println(perfekteZahl);
    }
    catch (Exception ex)
    {
      ex.printStackTrace();
    }
  }
}
