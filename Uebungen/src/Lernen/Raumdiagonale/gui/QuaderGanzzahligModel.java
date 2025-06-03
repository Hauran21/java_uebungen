package Lernen.Raumdiagonale.gui;

import Lernen.Raumdiagonale.data.QuaderGanzzahlig;
import java.util.List;
import javax.swing.AbstractListModel;

public class QuaderGanzzahligModel extends AbstractListModel<QuaderGanzzahlig> {
    
    private final List<QuaderGanzzahlig> liste;

    public QuaderGanzzahligModel(List liste) {
        this.liste = liste;
    }
    
    @Override
    public int getSize() {
        return liste.size();
    }

    @Override
    public QuaderGanzzahlig getElementAt(int index) {
        return liste.get(index);
    }
}
