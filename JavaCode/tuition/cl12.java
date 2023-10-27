// created on 1.6.23, classwork 

public class cl12
{
    double area(double r)
    {
        return Math.PI*Math.pow(r, 2); 
    }
    double area(int a)
    {
        return Math.pow(a, 2);
    }
    int area(int l, int b)
    {
        return l*b;
    }
    double area(int a, int b, int c)
    {
        double s=(a+b+c)/2, area=Math.sqrt(s*(s-a)*(s-b)*(s-c));
        return area;
    }
    public static void main(String args[])
    {
        cl12 ob=new cl12();
        System.out.println("Area of the circle is "+ob.area(7.0));
        System.out.println("Area of the square is "+ob.area(5));
        System.out.println("Area of the rectangle is "+ob.area(5, 6));
        System.out.println("Area of the triangle is "+ob.area(3, 4, 5));
    }
}