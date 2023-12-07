import java.awt.*;
import javax.swing.*;
import java.awt.event.*;

class MarvellousFrame {
    public MarvellousFrame(String title) 
    {
        JFrame fobj = new JFrame("title");
        fobj.setSize(300, 600);
        fobj.setVisible(true);
        fobj.addWindowListener(new MarvellousListener());

        Button bobj = new Button("Submit");
        fobj.add(bobj);
        fobj.addWindowListener(new MarvellousListener());
    }
}

class MarvellousListener extends WindowAdapter
{
    public void windowClosing(WindowEvent obj)
    {
        System.exit(0);
    }
}

class Gui6
{
    public static void main(String arg[])
    {
        MarvellousFrame mobj = new MarvellousFrame("PPA49");
    }
}