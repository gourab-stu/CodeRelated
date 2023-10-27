import javax.swing.*;
import java.awt.event.*;

public class KeyboardEventsDemo extends JFrame implements KeyListener {
    private JLabel label;

    public KeyboardEventsDemo() {
        label = new JLabel("Press any key:");
        label.setBounds(10, 10, 200, 20);
        add(label);

        addKeyListener(this);

        setSize(300, 200);
        setLayout(null);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setVisible(true);
    }

    public void keyTyped(KeyEvent e) {
        char c = e.getKeyChar();
        label.setText("Key Typed: " + c);
    }

    public void keyPressed(KeyEvent e) {
        int keyCode = e.getKeyCode();
        label.setText("Key Pressed: " + KeyEvent.getKeyText(keyCode));
    }

    public void keyReleased(KeyEvent e) {
        int keyCode = e.getKeyCode();
        label.setText("Key Released: " + KeyEvent.getKeyText(keyCode));
    }

    public static void main(String[] args) {
        new KeyboardEventsDemo();
    }
}
