import java.util.Scanner;

public class constructorOverloadingExample
{
    int a;
    constructorOverloadingExample()
    {
        a=0;
        System.out.println("Value initialised using default constructor");
        System.out.println("value="+a);
    }
    constructorOverloadingExample(int x)
    {
        a=x;
        System.out.println("Value updated using parameterized constructor");
        System.out.println("value="+a);
    }
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        constructorOverloadingExample ob1=new constructorOverloadingExample();
        System.out.print("Enter an integer value: ");
        int n=s.nextInt();
        constructorOverloadingExample ob2=new constructorOverloadingExample(n);
    }
}