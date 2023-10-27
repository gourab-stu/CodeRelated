import java.util.Scanner;

public class AllNumberSumUsingCmdLineArgs {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        if(args.length == 0) {
            System.out.println("No arguments passed");
            System.exit(0);
        }
        if(args.length > 1)
            System.out.println("Too many arguments. Only the first will be selected");
        int sum = 0, n = Integer.parseInt(args[0]);
        String temp1;
        System.out.println(n + " numbers can be entered");
        for (int i = 0; i < n; i++) {
            int temp2 = 0;
            System.out.print("Enter the " + (i + 1) + " no element: ");
            temp1 = s.next();
            try {
                temp2 = Integer.parseInt(temp1);
            } catch (NumberFormatException e) {
                System.out.println("Skipping element due to " + e);
            }
            sum = sum + temp2;
        }
        System.out.println("Sum = " + sum);
    }
}
