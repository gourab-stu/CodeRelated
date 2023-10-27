class clexc extends Exception
{
    public clexc(String s)
    {
        super(s);
    }
}

public class temp2
{
    public static void main(String args[])
    {
        try
        {
            throw new clexc("my exception");
        }
        catch(clexc ex)
        {
            System.out.println("exception Caught");
            System.out.println(ex.getMessage());
        }
    }
}
