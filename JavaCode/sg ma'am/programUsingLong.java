import java.util.Scanner;

public class programUsingLong
{
    public static void chkBin(long n)
    {
        long r=0;
        while(n>0)
        {
            r=n%10;
            n=n/10;
            if(r>1)
            {
                System.out.println("Number is not in binary");
                java.lang.System.exit(0);
            }
        }
    }
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        int i=1;
        long rev=0, r, number;
        System.out.print("Enter the binary number: ");
        number=s.nextLong();
        chkBin(number);
        while(number>0)
        {
            r=number%10;
            rev=rev+i*r;
            number=number/10;
            i=i*2;
        }
        System.out.println("The decimal equivalent is: "+rev);
        s.close();
    }
}