package data;

/**
 *
 * @author robot
 */
public enum Lizenz {
    GEKAUFT, 
    GELIEHEN,
    PRIVATKOPIE,
    RAUBKOPIE;

    private final static String[] humanReadable = {
        "Gekauft",
        "Geliehen",
        "Privatkopie",
        "Raubkopie",
    };
    
    
    @Override
    public String toString() {
        return humanReadable[ordinal()];
                //ordinal -> heißt man iteriert über das humanreadable
    }

}
