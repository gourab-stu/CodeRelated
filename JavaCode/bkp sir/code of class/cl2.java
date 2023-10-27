import java.util.Scanner;

public class cl2
{
    public static void main(String gourab[])
    {
        int a, b, c;
        Scanner s=new Scanner(System.in);
        System.out.println("Enter two numbers: ");
        a=s.nextInt();
        b=s.nextInt();
        c=a/b;
        System.out.println("Result = "+c);
        System.out.println("End of program");
        s.close();
    }
}