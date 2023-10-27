public class PrimeWithinRange
{
    public static int prime(int n)
    {
        int count=0, i=1;
        for(    ; i<=n; i++)
        {
            if(n%i==0)
                count++;
        }
        if(count==2)
            return n;
        else
            return 0;
    }
    public static void main(String args[])
    {
        System.out.println("Prime numbers from 1 to 100 are");
        for(int i=1; i<=100; i++)
        {
            if(prime(i)!=0)
                System.out.println(prime(i));
        }
    }
}