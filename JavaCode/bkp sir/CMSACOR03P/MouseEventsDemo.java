import javax.swing.*;
import java.awt.event.*;

public class MouseEventsDemo extends JFrame implements MouseListener, MouseMotionListener {
    private JLabel label;

    public MouseEventsDemo() {
        label = new JLabel("Mouse Events:");
        label.setBounds(10, 10, 200, 20);
        add(label);

        addMouseListener(this);
        addMouseMotionListener(this);

        setSize(300, 200);
        setLayout(null);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setVisible(true);
    }

    public void mouseClicked(MouseEvent e) {
        label.setText("Mouse Clicked at (" + e.getX() + ", " + e.getY() + ")");
    }

    public void mouseEntered(MouseEvent e) {
        label.setText("Mouse Entered at (" + e.getX() + ", " + e.getY() + ")");
    }

    public void mouseExited(MouseEvent e) {
        label.setText("Mouse Exited");
    }

    public void mousePressed(MouseEvent e) {
        label.setText("Mouse Pressed at (" + e.getX() + ", " + e.getY() + ")");
    }

    public void mouseReleased(MouseEvent e) {
        label.setText("Mouse Released at (" + e.getX() + ", " + e.getY() + ")");
    }

    public void mouseDragged(MouseEvent e) {
        label.setText("Mouse Dragged at (" + e.getX() + ", " + e.getY() + ")");
    }

    public void mouseMoved(MouseEvent e) {
        label.setText("Mouse Moved at (" + e.getX() + ", " + e.getY() + ")");
    }

    public static void main(String[] args) {
        new MouseEventsDemo();
    }
}
