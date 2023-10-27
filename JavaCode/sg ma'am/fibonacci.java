import java.util.Scanner;

public class fibonacci
{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        System.out.print("Enter the number of terms: ");
        int n=s.nextInt(), a=0, b=1, c;
        System.out.println("The series is");
        for(int i=1; i<=n; i++)
        {
            c=a+b;
            System.out.print(a+" ");
            a=b;
            b=c;
        }
        s.close();
    }
}