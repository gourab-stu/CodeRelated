// created on 1.6.23, classwork 

class cl
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
}
public class cl9
{
    public static void main(String args[])
    {
        cl ob=new cl();
        ob.f();
        ob.f(5);
        ob.f(5.6);
        ob.f('c');
    }
}