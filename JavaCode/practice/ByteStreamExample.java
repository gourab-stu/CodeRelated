import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;

public class ByteStreamExample {
    public static void main(String[] args) {
        // Input and output file names
        String sourceFile = "input.png";
        String destinationFile = "output.png";

        try {
            // Create a FileInputStream to read from the source file
            FileInputStream inputStream = new FileInputStream(sourceFile);

            // Create a FileOutputStream to write to the destination file
            FileOutputStream outputStream = new FileOutputStream(destinationFile);

            // Create a buffer to hold the data while copying
            byte[] buffer = new byte[1024]; // You can adjust the buffer size as needed

            int bytesRead;
            // Read data from the source file and write it to the destination file
            while ((bytesRead = inputStream.read(buffer)) != -1) {
                outputStream.write(buffer, 0, bytesRead);
            }

            // Close the input and output streams
            inputStream.close();
            outputStream.close();

            System.out.println("File copied successfully.");
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
