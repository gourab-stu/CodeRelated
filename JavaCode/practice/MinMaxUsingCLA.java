public class MinMaxUsingCLA {
    public static void main(String[] args) {
        if (args.length == 0)
            System.out.println("No arguments passed");
        else {
            int max = Integer.MIN_VALUE, min = Integer.MAX_VALUE, temp = 0;
            for(String str : args) {
                try {
                    temp = Integer.parseInt(str);
                } catch (NumberFormatException e) {
                    System.out.println("Not a number, skipping " + str);
                }
                if (temp > max)
                    max = temp;
                if (temp < min)
                    min = temp;
            }
            System.out.println("The maximum value is " + max);
            System.out.println("The minimum value is " + min);
        }
    }
}