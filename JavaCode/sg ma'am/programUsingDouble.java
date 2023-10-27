import java.util.Scanner;

public class programUsingDouble
{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        System.out.print("Enter length in feet: ");
        double feet=s.nextDouble();
        System.out.println("Length in centimeter is "+30.48d*feet);
        s.close();
    }
}