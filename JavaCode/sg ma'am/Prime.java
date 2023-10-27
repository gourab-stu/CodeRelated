import java.util.InputMismatchException;
import java.util.Scanner;

public class Prime {
    public static void main(String args[]) {
        Scanner s = new Scanner(System.in);
        System.out.print("Enter the number: ");
        int a = 0, count = 0;
        try {
            a = s.nextInt();
        } catch (InputMismatchException e) {
            System.out.println("Input is not a number");
            return;
        }
        for (int i = 1; i <= a; i++) {
            if (a % i == 0)
                count++;
        }
        if (count == 2)
            System.out.println(a + " is a prime number");
        else
            System.out.println(a + " is not a prime number");
        s.close();
    }
}