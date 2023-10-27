// classwork, dated 05.07.23
// input 4 double from user & print the largest

import java.util.Scanner;

public class cl22
{
    public static void main(String args[])
    {
        double a, b, c, d, m;
        Scanner s=new Scanner(System.in);
        System.out.println("Enter the first number: ");
        a=s.nextDouble();
        System.out.println("Enter the second number: ");
        b=s.nextDouble();
        System.out.println("Enter the third number: ");
        c=s.nextDouble();
        System.out.println("Enter the fourth number: ");
        d=s.nextDouble();
        m=Math.max(Math.max(a, b), Math.max(c, d));
        System.out.println("The max is "+m);
        s.close();
    }
}