import java.io.FileInputStream;
import java.io.IOException;

public class FinallyExample {
    public static void main(String[] args) {
        FileInputStream file = null;
        try {
            file = new FileInputStream("Armstrong.java");
            // Perform some operations with the file
            int data = file.read();
            while (data != -1) {
                System.out.print((char) data);
                data = file.read();
            }
        } catch (IOException e) {
            System.err.println("An error occurred while reading the file: " + e.getMessage());
        } finally {
            // Close the file, even if an exception occurs or not
            if (file != null) {
                try {
                    file.close();
                } catch (IOException e) {
                    System.err.println("Error closing the file: " + e.getMessage());
                }
            }
        }
    }
}
