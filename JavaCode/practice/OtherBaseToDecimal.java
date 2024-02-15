import java.util.Scanner;

public class OtherBaseToDecimal {
    public static int convert(int number, int InBase) {
        int rev = 0, i = 1, r;
        while (number > 0) {
            r = number % 10;
            rev = rev + i * r;
            number = number / 10;
            i = i * InBase;
        }
        return rev;
    }

    public static void main(String[] args) {
        int InBase = 0, number = 0;
        Scanner s = new Scanner(System.in);
        try {
            System.out.print("Enter the base of the input number: ");
            InBase = s.nextInt();
            System.out.print("Enter the number: ");
            number = s.nextInt();
        } catch (Exception e) {
            System.out.println("Invalid format for a number / base");
            return;
        }
        System.out.print("The decimal number is: " + convert(number, InBase));
    }
}
