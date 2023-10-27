import java.util.InputMismatchException;
import java.util.Scanner;

public class DecimalToBinary {
    public static void main(String args[]) {
        Scanner s = new Scanner(System.in);
        int i = 1;
        long number = 0, rev = 0, r;
        System.out.print("Enter the decimal number: ");
        try {
            number = s.nextLong();
        } catch (InputMismatchException e) {
            System.out.println("No characters allowed");
            return;
        }
        while (number > 0) {
            r = number % 2;
            rev = rev + i * r;
            number = number / 2;
            i = i * 10;
        }
        System.out.println("The binary equivalent is: " + rev);
        s.close();
    }
}