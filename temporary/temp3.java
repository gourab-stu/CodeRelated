import java.util.Scanner;

public class temp3
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Input a character: ");
        // takes a string as input
        String str = sc.nextLine();
        System.out.println("abc");
        // reads a character from string at the specified index value
        char ch = str.charAt(2);
        // prints the character
        System.out.println("You have entered " + ch);
        sc.close();
    }
}