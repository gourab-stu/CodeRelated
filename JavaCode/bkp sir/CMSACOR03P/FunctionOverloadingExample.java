public class FunctionOverloadingExample {
    // Method with int parameter
    public void show(int num) {
        System.out.println("Method with int parameter: " + num);
    }

    // Method with double parameter
    public void show(double num) {
        System.out.println("Method with double parameter: " + num);
    }

    public static void main(String[] args) {
        FunctionOverloadingExample example = new FunctionOverloadingExample();

        int intValue = 42;
        Double doubleValue = 3.14;

        example.show(intValue); // Calls show(int num)
        example.show(doubleValue); // Calls show(double num)

        Byte byteValue = 10;
        example.show(byteValue); // Calls show(int num) due to automatic type conversion
    }
}
