/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package ue10a.gui;

import java.util.List;
import javax.swing.AbstractListModel;
import ue10a.data.PerfekteZahl;

/**
 *
 * @author scheu
 */
public class PerfekteZahlListModel extends AbstractListModel<PerfekteZahl>
{
    
    private final List<PerfekteZahl> perfekteZahlen;

    public PerfekteZahlListModel(List<PerfekteZahl> perfekteZahlen) {
        this.perfekteZahlen = perfekteZahlen;
    }
    
    

    @Override
    public int getSize() {
        return perfekteZahlen.size();
    }

    @Override
    public PerfekteZahl getElementAt(int index) {
        return perfekteZahlen.get(index);
    }
    
}
