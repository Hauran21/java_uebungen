package ue02.gui;

import java.util.ArrayList;
import java.util.List;
import javax.swing.table.AbstractTableModel;
import ue02.data.LEDData;

/**
 *
 * @author robot
 */
public class LEDDataTableModel extends AbstractTableModel {
    
    public final List<LEDData> ledData;
    
    private final static String[] colName =
    {
        "Position", "Rot", "Grün", "Blau", "Weiß", "Farbe"
    };

    public LEDDataTableModel(List<LEDData> ledData) {
        this.ledData = ledData;
    }
    

    public LEDDataTableModel() {
        this.ledData = new ArrayList<>();
    }

    public List<LEDData> getLEDDataList()
    {
        return this.ledData;
    }

    @Override
    public int getRowCount() {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public int getColumnCount() {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public Object getValueAt(int i, int i1) {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }
    
}
