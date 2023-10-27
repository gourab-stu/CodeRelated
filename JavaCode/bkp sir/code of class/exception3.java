class clexc extends Exception
{
    private int v;
    public clexc(String s)
    {
        super(s);
    }
    public clexc(int a)
    {
        v=a;
    }
    public String toString()
    {
        return "exc"+v+"pp";
    }
}

public class exception3
{
    static void compute(int a) throws clexc
    { System.out.println("compute function"+a);
        if(a>10)
            throw new clexc(a);
        System.out.println("no throw");  
    }
    public static void main(String args[])
    {
        try
        {
            compute(11);
        }
        catch(clexc ex)
        {
            System.out.println("exception Caught");
            System.out.println(ex.getMessage());
        }
    }
}