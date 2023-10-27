import java.io.IOException;

public class ForEach {
    public static void clrscr() {
        // Clears Screen in java.
        try {
            if (System.getProperty("os.name").contains("Windows"))
                new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor();
            Runtime.getRuntime().exec("clear");
        } catch (IOException | InterruptedException ex) {
        }
    }

    public static void main(String[] args) {
        int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
        double sum = 0.0;
        int i = 0;
        for (double x : arr) {
            sum = sum + x;
            i++;
        }
        System.out.println("The average of array is: " + sum / i);
        // clrscr();
    }
}
