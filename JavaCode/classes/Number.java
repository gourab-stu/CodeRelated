public class Number {
    private static int a, b;

    // this method returns the minimum value between two number
    public static int min() {
        return min(a, b);
    }

    // this method returns the minimum value between two number passed as arguments
    public static int min(int a, int b) {
        if (a < b)
            return a;
        else
            return b;
    }

    // this method returns the minimum value between two number
    public static int max() {
        return max(a, b);
    }

    // this method returns the minimum value between two number passed as arguments
    public static int max(int a, int b) {
        if (a > b)
            return a;
        else
            return b;
    }
}
