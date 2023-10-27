import java.util.Scanner;

public class InteractiveSumCalculator {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.println("Enter integers to calculate their sum. Enter a non-integer value to stop.");
        int sum = 0;
        while (true) {
            System.out.print("Enter an integer: ");
            if (s.hasNextInt()) {
                int number = s.nextInt();
                sum += number;
            } else {
                break;
            }
        }
        System.out.println("Sum of the entered integers: " + sum);
        s.close();
    }
}
