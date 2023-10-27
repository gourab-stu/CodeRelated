import java.util.Scanner;

public class temp1
{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        System.out.print("Enter a word: ");
        String i=s.next();
        System.out.print("Enter a string: ");
        String j=s.nextLine();
        System.out.println("The word is \'"+i+"\'");
        System.out.println("The string is \""+j+"\"");
        s.close();
    }
}