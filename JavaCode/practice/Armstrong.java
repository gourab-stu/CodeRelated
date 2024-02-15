import java.util.InputMismatchException;
import java.util.Scanner;

public class Armstrong {
    public static int pow(int a, int b) {
        int result = a;
        for(int i = 1; i != b; i++, result *= a) ;
        return result;
    }

    public static boolean ArmstrongChecking(int n) {
        int numOfDigits = String.valueOf(n).length(), temp = n, r, sum = 0;
        while (temp > 0) {
            r = temp % 10;
            r = pow(r, numOfDigits);
            sum = sum + r;
            temp = temp / 10;
        }
        if (sum == n)
            return true;
        else
            return false;
    }

    public static void main(String[] args) {
        int n = 0;
        Scanner s = new Scanner(System.in);
        System.out.print("Enter the number: ");
        try {
            n = s.nextInt();
        } catch (InputMismatchException e) {
            System.out.println("Invalid input");
            return;
        }
        if (ArmstrongChecking(n))
            System.out.println("Number is Armstrong");
        else
            System.out.println("Number is not Armstrong");
    }
}
