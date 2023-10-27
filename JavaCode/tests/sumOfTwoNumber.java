import java.util.Scanner;

public class sumOfTwoNumber
{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        int a, b;
        System.out.print("Enter the first number: ");
        a=s.nextInt();
        System.out.print("Enter the second number: ");
        b=s.nextInt();
        int c=a+b;
        System.out.println(a+" + "+b+" = "+c);
        s.close();
    }
}
