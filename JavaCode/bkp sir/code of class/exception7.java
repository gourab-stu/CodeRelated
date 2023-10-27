import java.util.*;

public class exception7
{
    public static void main(String args[])
    {
        try
        {
            System.out.println("Outer try block starts");
            try
            {
                System.out.println("Inner try block starts");
                int res = 5 / 0;
            } 
            catch(InputMismatchException e)
            {
                System.out.println("InputMismatchException caught");
            }
            finally
            {
                System.out.println("Inner final");
            }
        }
        catch(ArithmeticException e)
        {
            System.out.println("ArithmeticException caught");
        }
        finally
        {
            System.out.println("Outer finally");
        }
    }
}