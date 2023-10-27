import java.util.Scanner;

public class programUsingByte
{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        System.out.print("Enter your age: ");
        int age=s.nextByte();
        if(age>=18)
        {
            System.out.print("You are eligible for applying to light motor vehicle liscence");
            if(age>=20)
                System.out.println(" and commercial vehicle liscence");
        }
        else
        {
            if(age>0)
                System.out.println("You are not old enough to apply for a driving liscence");
            else
                System.out.println("You are not yet born!");
        }
        s.close();
    }
}