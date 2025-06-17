package Lernen.Raumdiagonale.data;

public class QuaderGanzzahlig {
    private final int l, b, h;

    public QuaderGanzzahlig(int l, int b, int h) throws Exception {
        this.l = l;
        this.b = b;
        this.h = h;
        
        if(l<=0 || b<=0 || h<=0)
        {
            throw new Exception("Parameter müssen größer als 0 sein!");
        }
    }

    public int getL() {
        return l;
    }

    public int getB() {
        return b;
    }

    public int getH() {
        return h;
    }

    @Override
    public String toString() {
        return String.format("%4d : %4d : %4d", l, b, h);
    }
}
