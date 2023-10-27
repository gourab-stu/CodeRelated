public class StaticFunctionAndVarargs {
    // Static function that calculates the sum of variable-length arguments
    public static int sum(int... numbers) {
        int total = 0;
        for (int num : numbers) {
            total += num;
        }
        return total;
    }

    public static void main(String[] args) {
        // Call the static function with variable-length arguments
        int result1 = sum(1, 2, 3);
        int result2 = sum(10, 20, 30, 40, 50);

        System.out.println("Result 1: " + result1);
        System.out.println("Result 2: " + result2);
    }
}
