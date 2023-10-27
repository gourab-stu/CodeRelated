public class StringIndexOutOfBoundsExceptionExample {
    public static void main(String[] args) {
        try {
            String text = "Hello, World!";
            char character = text.charAt(20); // Index out of bounds
            System.out.println("Character at index 20: " + character);
        } catch (StringIndexOutOfBoundsException e) {
            System.out.println("StringIndexOutOfBoundsException caught: " + e.getMessage());
        }
    }
}
