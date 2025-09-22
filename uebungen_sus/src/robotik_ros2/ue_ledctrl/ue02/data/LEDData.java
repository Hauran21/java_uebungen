package ue02.data;

import java.io.BufferedReader;
import java.io.BufferedWriter;

public class LEDData {
    private int position;
    private int r;
    private int g;
    private int b;
    private int w;

    public LEDData(int position, int r, int g, int b, int w) {
        this.position = position;
        this.r = r;
        this.g = g;
        this.b = b;
        this.w = w;
    }
    
    public LEDData(BufferedReader reader) throws Exception 
    {
        final String line = reader.readLine(); //z.B.: 23;255;255;0;0
        final String[] token = line.split(";");
        
        position = Integer.parseInt(token[0]);
        r = Integer.parseInt(token[1]);
        g = Integer.parseInt(token[2]);
        b = Integer.parseInt(token[3]);
        w = Integer.parseInt(token[4]);
    }
    
    public void writeTo(BufferedWriter writer) throws Exception
    {
        // Daten werden im CSV (comma separated value) geschrieben.
        writer.write(
                String.format("%d;%d;%d;%d;%d", position, r, g, b, w)
        );
        writer.newLine();
    }

    public void setPosition(int position) {
        this.position = position;
    }

    public void setR(int r) {
        this.r = r;
    }

    public void setG(int g) {
        this.g = g;
    }

    public void setB(int b) {
        this.b = b;
    }

    public void setW(int w) {
        this.w = w;
    }
    

    public int getPosition() {
        return position;
    }

    public int getR() {
        return r;
    }

    public int getG() {
        return g;
    }

    public int getB() {
        return b;
    }

    public int getW() {
        return w;
    }
    
}
