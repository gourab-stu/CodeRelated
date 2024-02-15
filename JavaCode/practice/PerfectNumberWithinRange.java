import java.util.InputMismatchException;
import java.util.Scanner;

public class PerfectNumberWithinRange {
    public static void perfect(int n) {
        int remainder, sum = 0;
        for(int i = 1; i < n; i++) {
            remainder = n % i;
            if(remainder == 0)
                sum = sum + i;
        }
        if(n == sum)
            System.out.println(sum);
    }

    public static void main(String[] args) {
        int lv, uv;
        Scanner s = new Scanner(System.in);
        try {
            System.out.print("Enter the lower limit: ");
            lv = s.nextInt();
            System.out.print("Enter the upper limit: ");
            uv = s.nextInt();
        } catch (InputMismatchException e) {
            System.out.println("Not a number / Integer out of range");
            return;
        }
        System.out.println("Perfect number(s) from " + lv + " upto " + uv + " are");
        while(lv <= uv) {
            perfect(lv);
            lv++;
        }
    }
}
