// input x degree and find sin(x), cos(x)

import java.util.Scanner;

public class cl23
{
    public static void main(String args[])
    {
        // (Math.pow(a, 2)+Math.pow(b, 2))/(Math.pow(c, 3)+Math.pow(d, 4))
        // (Math.sqrt(a)+Math.pow(b, 2)*Math.pow(c, 3)+Math.pow(d, 4))/(Math.pow((a+b), 5)*Math.cbrt(Math.E))
        // ((Math.log(a)/Math.log(b))*(Math.log(d)/Math.log(c)))/(Math.log(f)/Math.log(Math.E))
        int x;
        Scanner s=new Scanner(System.in);
        System.out.println("Enter the angle in degree");
        x=s.nextInt();
        System.out.println("Value of sin(x) is "+Math.sin(Math.toRadians(x)));
        System.out.println("Value of cos(x) is "+Math.cos(Math.toRadians(x)));
    }
}