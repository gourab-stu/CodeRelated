import java.util.Scanner;

public class programUsingInt
{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        System.out.print("Enter the Capital/Principal (p): ");
        int p=s.nextShort();
        System.out.print("Enter the Time in year (t): ");
        int t=s.nextShort();
        System.out.print("Enter the rate of interest in percentage (r%): ");
        int r=s.nextShort();
        int i=(p*t*r)/100;
        System.out.println("The simple interest is: "+i);
        System.out.println("The total amount is: "+(p+i));
        s.close();
    }
}