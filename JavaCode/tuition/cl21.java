// classwork, dated 05.07.23
// input 3 integer from user & print the largest

import java.util.Scanner;

public class cl21
{
    public static void main(String args[])
    {
        int a, b, c, d, e;
        Scanner s=new Scanner(System.in);
        System.out.println("Enter the first number: ");
        a=s.nextInt();
        System.out.println("Enter the second number: ");
        b=s.nextInt();
        System.out.println("Enter the third number: ");
        c=s.nextInt();
        d=Math.max(a, b);
        e=Math.max(d, c);
        System.out.println("The max is "+e);
        s.close();
    }
}