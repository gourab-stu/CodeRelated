// created on 1.6.23, classwork 

public class cl10
{
    void f()
    {
        System.out.println("This is without parameter");
    }
    void f(int x)
    {
        System.out.println("This is integer parameter");
    }
    void f(float x)
    {
        System.out.println("This is float parameter");
    }
    void f(char x)
    {
        System.out.println("This is character parameter");
    }
    public static void main(String args[])
    {
        cl10 ob=new cl10();
        ob.f();
        ob.f(5);
        ob.f('a');
        ob.f(5.3f);
    }
}