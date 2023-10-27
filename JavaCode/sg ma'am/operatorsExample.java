import java.util.Scanner;

public class operatorsExample
{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        System.out.print("Enter value of a: ");
        int a=s.nextInt();
        System.out.print("Enter value of b: ");
        int b=s.nextInt();
        System.out.println("a+b="+(a+b));
        System.out.println("a-b="+(a-b));
        System.out.println("a*b="+(a*b));
        System.out.println("a/b="+(a/b));
    }
}