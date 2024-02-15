class CustomException extends Exception {
    public CustomException(String message) {
        super(message);
    }
}

public class Example {
    public void divide(int numerator, int denominator) throws CustomException {
        if (denominator == 0) {
            throw new CustomException("Denominator cannot be zero.");
        }
        int result = numerator / denominator;
        System.out.println("Result: " + result);
    }

    public static void main(String[] args) {
        Example example = new Example();

        try {
            example.divide(10, 0); // This will throw a CustomException
        } catch (CustomException e) {
            System.err.println("An error occurred: " + e.getMessage());
        }
    }
}
