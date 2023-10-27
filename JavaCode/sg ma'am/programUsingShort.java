import java.util.Scanner;

public class programUsingShort
{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        System.out.print("Enter the first number: ");
        short a=s.nextShort();
        System.out.print("Enter the second number: ");
        short b=s.nextShort();
        System.out.println(a+" + "+b+" = "+(a+b));
        s.close();
    }
}