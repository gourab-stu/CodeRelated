import java.applet.Applet;
import java.awt.Graphics;
import java.util.Scanner;

public class applet2 extends Applet {
    public void paint(Graphics g) {
        String name, city, ph, m;
        System.out.println("Type your name");
        Scanner o = new Scanner(System.in);
        name = o.nextLine();
        System.out.println("enter the city");
        city = o.nextLine();
        System.out.println("enter the phone number");
        ph = o.nextLine();
        System.out.println("enter the phone marks");
        m = o.nextLine();
        g.drawString(name, 30, 30);
        g.drawString(city, 30, 40);
        g.drawString(ph, 30, 50);
        g.drawString(m, 30, 60);
    }
}