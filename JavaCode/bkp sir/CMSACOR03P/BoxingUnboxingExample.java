public class BoxingUnboxingExample {
    public static void main(String[] args) {
        // Boxing: Converting int to Integer
        int primitiveint = 42;
        Integer boxedint = Integer.valueOf(primitiveint);
        System.out.println("Boxed Integer: " + boxedint);

        // Unboxing: Converting Integer to int
        Integer boxedValue = Integer.valueOf(100);
        int unboxedValue = boxedValue.intValue();
        System.out.println("Unboxed int: " + unboxedValue);

        // Autoboxing: Automatically converting int to Integer
        int autoBoxedint = 73;
        Integer autoBoxedInteger = autoBoxedint;
        System.out.println("Autoboxed Integer: " + autoBoxedInteger);

        // Autounboxing: Automatically converting Integer to int
        Integer autoUnboxedValue = Integer.valueOf(200);
        int autoUnboxedint = autoUnboxedValue;
        System.out.println("Autounboxed int: " + autoUnboxedint);
    }
}
