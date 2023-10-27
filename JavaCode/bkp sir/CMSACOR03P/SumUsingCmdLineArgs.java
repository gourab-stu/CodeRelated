public class SumUsingCmdLineArgs {
    public static void main(String[] args) {
        if (args.length == 0)
            System.out.println("No arguments passed");
        else {
            int sum = 0;
            for(String x : args) {
                try {
                    int n = Integer.parseInt(x);
                    sum = sum + n;
                } catch (NumberFormatException e) {
                    System.out.println("Skipping " + x);
                }
            }
            System.out.println("Sum of passed integer arguments is " + sum);
        }
    }
}
