import java.util.Scanner;

public class PerfectNumber {
    public static boolean perfect(int n) {
        int remainder, sum = 0;
        for (int i = 1; i < n; i++) {
            remainder = n % i;
            if (remainder == 0)
                sum += i;
        }
        if (n == sum)
            return true;
        else
            return false;
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.print("Enter the number: ");
        int n = s.nextInt();
        if (perfect(n))
            System.out.println(n + " is a perfect number");
        else
            System.out.println(n + " is not a perfect number");
    }
}
