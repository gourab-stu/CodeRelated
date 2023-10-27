import java.util.Scanner;

public class programUsingChar
{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        char ch='c';
        int count=0;
        while(ch=='c')
        {
            System.out.println("\tLoop no "+count);
            System.out.print("Enter 's' to stop or enter 'c' to continue: ");
            ch=s.next().charAt(0);
            if((ch!='c')&&(ch!='s'))
            {
                System.out.println("Enter valid input");
                ch='c';
            }
            count++;
        }
        System.out.println("END OF PROGRAM");
        s.close();
    }
}