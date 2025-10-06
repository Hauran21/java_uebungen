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
        return ledData.size();
    }

    @Override
    public int getColumnCount() {
        return colName.length;
    }

    @Override
    public Object getValueAt(int rowIndex, int columnIndex) {
        
        final LEDData led = ledData.get(rowIndex);
        
        return switch(columnIndex)
        {
            case 0 -> led.getPosition();
            case 1 -> led.getR();
            case 2 -> led.getG();
            case 3 -> led.getB();
            case 4 -> led.getW();   
            case 5 ->
                {
                    int r = led.getR();
                    int g = led.getG();
                    int b = led.getB();
                    int w = led.getW();

                    int rr = Math.min(255, r+w);
                    int gg = Math.min(255, g+w);
                    int bb = Math.min(255, b+w);

                    yield String.format("#%02X%02X%02X", rr, gg, bb);
                }
            default -> "Should not see me ...";
        };
    }

    @Override
    public void setValueAt(Object aValue, int rowIndex, int columnIndex) {
        final LEDData led = ledData.get(rowIndex);
        
        switch(columnIndex)
        {
            case 0: 
                led.setPosition((Integer) aValue);
                break;
                
            case 1: 
                led.setR((Integer) aValue);
                break;
            
            case 2: 
                led.setG((Integer) aValue);
                break;
                
            case 3: 
                led.setB((Integer) aValue);
                break;
            
            case 4: 
                led.setW((Integer) aValue);
                break;
            
            case 5:
                break; //Eingabe wird ignoriert-> wir füllen diese Spalte selbst
                // Dieser Wert errechnet sich aus RGB und W-Wert -> siehe getValueAt
            
            default:
                System.out.println("Invalid!!!");
        }
    }

    @Override
    public String getColumnName(int column) {
        return colName[column];
    }
    
    
}
