import java.io.File;
import java.util.Scanner;

public class FileLocationFinder {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the Java code file name: ");
        String javaFileName = scanner.nextLine();

        System.out.print("Enter the HTML document file name: ");
        String htmlFileName = scanner.nextLine();

        String javaFilePath = getFileLocation(javaFileName);
        String htmlFilePath = getFileLocation(htmlFileName);

        if (javaFilePath != null) {
            System.out.println("Java code location: " + javaFilePath);
        } else {
            System.out.println("Java code file '" + javaFileName + "' not found.");
        }

        if (htmlFilePath != null) {
            System.out.println("HTML document location: " + htmlFilePath);
        } else {
            System.out.println("HTML document file '" + htmlFileName + "' not found.");
        }
    }

    public static String getFileLocation(String fileName) {
        File file = new File(fileName);
        if (file.exists()) {
            return file.getAbsolutePath();
        }
        return null;
    }
}
