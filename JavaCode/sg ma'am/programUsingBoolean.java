import java.util.Scanner;

public class programUsingBoolean
{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        boolean b;
        System.out.print("Enter an integer: ");
        b=s.hasNextInt();
        if(b)
            System.out.println("Number is an integer");
        else
            System.out.println("Number is not an integer");
        s.close();
    }
}