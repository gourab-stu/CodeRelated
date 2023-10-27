import java.util.Scanner;
public class swapnil1
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter 1st number: ");
        int a=sc.nextInt();
        System.out.println("Enter 2nd number: ");
        int b=sc.nextInt();
        System.out.println("Enter 3rd number: ");
        int c=sc.nextInt();
        int sum=0;
        sum=a+b+c;
        System.out.print("The sum of the three numbers is: "+sum);
    }
}