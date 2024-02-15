public class ExceptionHandlingExampleWithMultipleCatchBlock {
    public static void main(String[] args) {
        try {
            int[] numbers = { 1, 2, 3 };
            int result = numbers[5] / 0; // Attempt to access an out-of-bounds index and divide by zero
        } catch (ArithmeticException e) {
            System.out.println("ArithmeticException: " + e.getMessage());
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("ArrayIndexOutOfBoundsException: " + e.getMessage());
        } catch (Exception e) {
            System.out.println("Exception: " + e.getMessage());
        } finally {
            System.out.println("Finally block always executes.");
        }
    }
}
