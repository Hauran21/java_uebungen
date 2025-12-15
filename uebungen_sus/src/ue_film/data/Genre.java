package data;

/**
 *
 * @author robot
 */
public enum Genre {
    // Statische Variablen
    ACTION, 
    DRAMA, 
    THIRLLER, 
    WAR, 
    SCIENCEFICTION, 
    FANTASY, 
    CRIME,
    BIOGRAPHY, 
    ANIMATION, 
    DOCUMENTATION, 
    HORROR, 
    COMEDY, 
    MUSIC, 
    ROMANCE, 
    WESTERN;
    
    final private static String[] humanReadable = { // kann statt humanreadable auch anders heißen
        "Actionfilm",
        "Drama",
        "Thriller",
        "War",
        "Sciencefiction",
        "Fantasy",
        "Crime",
        "Biography",
        "Animation",
        "Documentation",
        "Horror",
        "Comedy",
        "Music",
        "Romanze",
        "Westernfilm",
    };

    @Override
    public String toString() {
        return humanReadable[ordinal()];
                //ordinal -> heißt man iteriert über das humanreadable
    }
    
    
}
