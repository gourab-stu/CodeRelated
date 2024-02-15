public class MainMethodRecursion {
    public static void main() {
        System.out.println("Hello World 1");
        main();
        System.out.println("Hello World 2");
    }
    public static void main(String[] args) {
        main();
    }
}