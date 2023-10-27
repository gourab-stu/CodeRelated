// created on 20.5.23, classwork 

public class cl2
{
    void f()
    {
        System.out.println("Sunday");
    }
    public static void main(String args[])
    {
        cl2 ob=new cl2(); // new -> dynamic memory allocation
        System.out.println("Monday");
        ob.f();
        System.out.println("Friday");
    }
}