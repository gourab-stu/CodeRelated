import java.util.Scanner;

// class name of java always starts with capital letter
// if java class name with multiple words then 1st letter of every word will be capital
// if java function name with multiple words then from 2nd word 1st letter of every word will be capital

public class cl1
{
    public static void main(String args[])    // String is class name
    {
        System.out.println("Java");         // System.out means output
        Scanner s=new Scanner(System.in);     // System.in means input
        int a=s.nextInt();
        int b=s.nextInt();
        int c=a+b;
        int d=a-b;
        int e=a*b;
        int f=a/b;
        System.out.println("Sum: "+c);
        System.out.println("Sub: "+d);
        System.out.println("Product: "+e);
        System.out.println("Division: "+f);
        s.close();
    }
}