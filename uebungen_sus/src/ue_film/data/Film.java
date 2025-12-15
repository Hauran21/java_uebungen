package data;

import java.io.BufferedReader;
import java.time.LocalDate;
import java.time.format.DateTimeFormatter;

/**
 *
 * @author robot
 */
public class Film {
    private final int id;
    private final String titel, hauptdarsteller;
    private final Genre genre;
    private final int erscheinungsjahr, dauerInMinuten, fsk;
    private final Qualitaet qualitaet;
    private final Lizenz lizenz;
    private final boolean gesehen; 
    private final LocalDate erworbenAm;

    public Film(
            int id, 
            String titel, 
            String hauptdarsteller, 
            Genre genre, 
            int erscheinungsjahr, 
            int dauerInMinuten, 
            int fsk, 
            Qualitaet qualitaet, 
            Lizenz lizenz, 
            boolean gesehen, 
            LocalDate erworbenAm
        )
    
        throws Exception {
            this.id = id;
            this.titel = titel;
            this.hauptdarsteller = hauptdarsteller;
            this.genre = genre;
            this.erscheinungsjahr = erscheinungsjahr;
            this.dauerInMinuten = dauerInMinuten;
            this.fsk = fsk;
            this.qualitaet = qualitaet;
            this.lizenz = lizenz;
            this.gesehen = gesehen;
            this.erworbenAm = erworbenAm;

            if (titel.isBlank()) {
                throw new Exception("Titel darf nicht leer sein!");
            }
        }
    
    public Film(BufferedReader reader) throws Exception {
        final String line = reader.readLine();
        final String[] token = line.split(";");
        
        id = Integer.parseInt(token[0]);
        titel = token[1];
        hauptdarsteller = token[2];
        
        
       
        genre = Genre.valueOf(token[3]);
        
        gesehen = Boolean.parseBoolean(token[9]);
        
        
        erworbenAm = LocalDate.parse(token[10], DateTimeFormatter.ofPattern("yyyy-MM-dd"));
        
    }
    
}
