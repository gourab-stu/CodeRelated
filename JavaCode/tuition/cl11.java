// created on 1.6.23, classwork 

public class cl11
{
    cl11()
    {
        System.out.println("This is without parameter");
    }
    cl11(int x)
    {
        System.out.println("This is integer parameter");
    }
    cl11(double x)
    {
        System.out.println("This is double parameter");
    }
    cl11(char x)
    {
        System.out.println("This is character parameter");
    }
    public static void main(String args[])
    {
        cl11 ob=new cl11();
        cl11 ob1=new cl11(5);
    }
}