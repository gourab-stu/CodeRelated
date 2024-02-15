import java.util.Scanner;

public class DecimalToOtherBase {
    public static int convert(int number, int OutBase) {
        int rev = 0, i = 1, r;
        try {
            while (number > 0) {
                r = number % OutBase;
                rev = rev + i * r;
                number = number / OutBase;
                i = i * 10;
            }
        } catch (ArithmeticException e) {
            System.out.println("Base cannot be 0");
            System.exit(0);
        }
        return rev;
    }
    public static void main(String[] args) {
        int OutBase = 0, number = 0;
        Scanner s = new Scanner(System.in);
        try {
            System.out.print("Enter the decimal number: ");
            number = s.nextInt();
            System.out.print("Enter the base of the output number: ");
            OutBase = s.nextInt();
        } catch (Exception e) {
            System.out.println("Invalid format for a number / base");
            return;
        }
        System.out.print("The output is: " + convert(number, OutBase));
    }
}
