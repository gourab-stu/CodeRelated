// created on 1.6.23, classwork 

public class cl8
{
    void f()
    {
        System.out.println("This is without parameter");
    }
    void f(int x)
    {
        System.out.println("This is integer parameter");
    }
    void f(double x)
    {
        System.out.println("This is double parameter");
    }
    void f(char x)
    {
        System.out.println("This is character parameter");
    }
    public static void main(String args[])
    {
        cl8 ob=new cl8();
        ob.f();
        ob.f(5);
        ob.f('a');
        ob.f(5.3);
    }
}