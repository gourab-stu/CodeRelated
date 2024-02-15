import java.util.Scanner;

public class AllNumberConversionWithLessThanBase11 {
    public static int convert(int InBase, int OutBase, int number) {
        int i = 1, rev = 0, r = 0;
        try {
            if (InBase != OutBase) {
                if ((number > 10) && (InBase != 10)) // this statement converts the given number to decimal
                {
                    while (number > 0) {
                        r = number % 10;
                        rev = rev + i * r;
                        number = number / 10;
                        i = i * InBase;
                    }
                    number = rev;
                    rev = 0;
                    i = 1;
                }
                if (OutBase != 10) // this statement converts the decimal number to given number system
                {
                    while (number > 0) {
                        r = number % OutBase;
                        rev = rev + i * r;
                        number = number / OutBase;
                        i = i * 10;
                    }
                    number = rev;
                }
            } else
                System.out.println("Input and output base are same");
        } catch (Exception e) {
            System.out.println("Cannot convert");
        }
        return number;
    }

    public static void main(String[] args) {
        int InBase = 0, OutBase = 0, number = 0;
        Scanner s = new Scanner(System.in);
        try {
            System.out.print("Enter the base of the input number: ");
            InBase = s.nextInt();
            System.out.print("Enter the number: ");
            number = s.nextInt();
            System.out.print("Enter the base of the output number: ");
            OutBase = s.nextInt();
        } catch (Exception e) {
            System.out.println("Invalid format for a number / base");
            return;
        }
        System.out.print("The output is: " + convert(InBase, OutBase, number));
    }
}
