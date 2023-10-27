import java.util.Scanner;

public class programUsingFloat
{
    Scanner s=new Scanner(System.in);
    private float radius, pi=3.14f; 
    programUsingFloat()
    {
        System.out.print("Enter the radius of the circle: ");
        radius=s.nextFloat();
    }
    float area()
    {
        return pi*radius*radius;
    }
    float perimeter()
    {
        return 2*pi*radius;
    }
    public static void main(String args[])
    {
        programUsingFloat ob=new programUsingFloat();
        System.out.println("Perimeter of the circle is "+ob.perimeter());
        System.out.println("Area of the circle is "+ob.area());
    }
}