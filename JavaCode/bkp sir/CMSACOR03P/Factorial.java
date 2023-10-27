import java.util.InputMismatchException;
import java.util.Scanner;

public class Factorial {
    public static long fact(int n) {
        if((n == 1) || (n == 0))
            return 1;
        else
            return n * fact(n - 1);
    }
    public static void main(String[] args) {
        int number = 0;
        Scanner s = new Scanner(System.in);
        System.out.print("Enter the number: ");
        try {
            number = s.nextInt();
        } catch (InputMismatchException e) {
            System.out.println("Invalid number");
            return;
        }
        System.out.println(number + " ! = " + fact(number));
    }
}
