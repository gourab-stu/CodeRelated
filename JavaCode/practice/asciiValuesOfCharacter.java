import java.util.Scanner;

public class asciiValuesOfCharacter {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.print("Enter a character: ");
        char ch = s.next().charAt(0);
        System.out.println("ASCII value of " + ch + " is " + (int) ch);
        int i = ch;
        System.out.println("ASCII value of " + ch + " is " + i);
        System.out.print("Enter an integer: ");
        int a = s.nextInt();
        System.out.println("Character having ASCII value " + a + " is " + (char) a);
        s.close();
    }
}