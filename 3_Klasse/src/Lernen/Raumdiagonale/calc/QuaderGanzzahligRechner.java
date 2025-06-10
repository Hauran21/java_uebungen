package Lernen.Raumdiagonale.calc;

import Lernen.Raumdiagonale.data.QuaderGanzzahlig;
import java.util.ArrayList;
import java.util.List;

public class QuaderGanzzahligRechner {
    private final int obergrenze;
    private final List<QuaderGanzzahlig> liste = new ArrayList<>();
    private long millis;

    public QuaderGanzzahligRechner(int obergrenze)
            throws Exception
    {
        this.obergrenze = obergrenze;
        
        if(obergrenze < 2) 
        {
            throw new Exception("Obergröße muss größer als 1 sein!");
        }
        
        rechnen();
    }

    private void rechnen() throws Exception {
        final long starttime = System.currentTimeMillis();
        for(int i = 1;  1 <= obergrenze; i++) {
            for(int j = i; j <= obergrenze; j++) {
                for(int k = j; k <= obergrenze; k++) {
                    final int quadrat = i*i +  j*j + k*k;
                    final int wurzel = (int)Math.round(Math.sqrt(quadrat));
                    if(wurzel * wurzel == quadrat) {
                        liste.add(new QuaderGanzzahlig(i, j, k));
                    }
                }
            }
        }
        millis = System.currentTimeMillis() - starttime;
    }

    public List<QuaderGanzzahlig> getListe() {
        return liste;
    }

    public long getMillis() {
        return millis;
    }
    
    
   
    
}
