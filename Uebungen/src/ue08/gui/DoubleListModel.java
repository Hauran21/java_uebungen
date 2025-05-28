package ue08.gui;

import java.util.List;
import javax.swing.AbstractListModel;

/**
 *
 * @author robot
 */
public class DoubleListModel extends AbstractListModel<Double> {
    
    private final List<Double> liste;

    public DoubleListModel(List<Double> liste) {
        this.liste = liste;
    }

    @Override
    public int getSize() {
        return liste.size();
    }

    @Override
    public Double getElementAt(int index) {
        return liste.get(index);
    }
}
