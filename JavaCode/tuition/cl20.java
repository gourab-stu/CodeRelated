// classwork, dated 05.07.23
// input 2 values from user and print the largest

import java.util.Scanner;

public class cl20
{
    public static void main(String args[])
    {
        int a, b, c;
        Scanner s=new Scanner(System.in);
        System.out.println("Enter the first number: ");
        a=s.nextInt();
        System.out.println("Enter the second number: ");
        b=s.nextInt();
        c=Math.max(a, b);
        System.out.println("The max is "+c);
        s.close();
    }
}