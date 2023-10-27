import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.net.URL;
import java.net.URLConnection;

public class URLConnectionExample {
    public static void main(String[] args) {
        try {
            // Create a URL object
            String urlString = "https://zodogo.com/guimp.com/";
            URL url = new URL(urlString);

            // Open a connection to the URL
            URLConnection connection = url.openConnection();

            // Print information about the URL
            System.out.println("URL: " + url);
            System.out.println("Protocol: " + url.getProtocol());
            System.out.println("Host: " + url.getHost());
            System.out.println("Port: " + url.getPort());
            System.out.println("Path: " + url.getPath());

            // Open a stream to read content from the URL
            BufferedReader reader = new BufferedReader(new InputStreamReader(connection.getInputStream()));
            String line;
            System.out.println("\nContent from the URL:\n");

            while ((line = reader.readLine()) != null) {
                System.out.println(line);
            }

            // Close the reader
            reader.close();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
