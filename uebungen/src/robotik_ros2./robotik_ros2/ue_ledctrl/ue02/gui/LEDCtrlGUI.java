/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/GUIForms/JFrame.java to edit this template
 */
package ue02.gui;
import ue01.gui.RobotCtrlGUI;

/**
 *
 * @author robu
 */
public class LEDCtrlGUI extends RobotCtrlGUI
{
    private final LEDCtrlPanel pLEDCtrl = new LEDCtrlPanel(this, this.getNodeRobotCtrl());
    /**
     * Creates new form LEDCtrlGUI
     */
    public LEDCtrlGUI()
    {
        //super();
        this.getTabbedPane().insertTab("LED-Control", null, pLEDCtrl, "LEDs", 0);
        this.getTabbedPane().setSelectedIndex(0);
        //this.getTabbedPane().addTab("LED-Control", pLEDCtrl);
        
    }
    
    /**
     * @param args the command line arguments
     */
    public static void main(String args[])
    {
        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable()
        {
            public void run()
            {
                new LEDCtrlGUI().setVisible(true);
            }
        });
    }
    // Variables declaration - do not modify
    // End of variables declaration
}
