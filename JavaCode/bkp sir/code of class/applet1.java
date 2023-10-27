import java.applet.Applet;
import java.awt.Graphics;

public class applet1 extends Applet
{
    public void paint(Graphics g)
    {
        g.drawString("Hello World", 20, 20);
    }
}
/*
<applet code="applet1.class" width="200" height="200">
</applet>
*/