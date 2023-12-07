import java.awt.*;

class MarvellousFrame {
    public MarvellousFrame(String title) {
        Frame fobj = new Frame("title");
        fobj.setSize(600, 300);
        fobj.setVisible(true);
        fobj.close();
    }
}

class Gui2
{
    public static void main(String arg[])
    {
        MarvellousFrame mobj = new MarvellousFrame("PPA49");
        mobj.close();
    }
}