// created on 1.6.23, classwork 

import java.util.Scanner;

public class cl7
{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        System.out.print("Enter a number: ");
        int n=s.nextInt(), square=n*n, remainder=square%10;
        System.out.println("Square of the number is: "+square);
        System.out.println("Last digit of the square is: "+remainder);
        System.out.print("Last digit of the square and the numbers are ");
        if(remainder==n)
            System.out.println("equal");
        else
            System.out.println("not equal");
        s.close();
    }
}