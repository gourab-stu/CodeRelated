import java.util.Scanner;

public class showingNumbers
{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        int lv, uv;
        System.out.print("Enter the lower value: ");
        lv=s.nextInt();
        System.out.print("Enter the upper value: ");
        uv=s.nextInt();
        System.out.println("Numbers from "+lv+" to "+uv+" are");
        while(lv<=uv)
        {
            System.out.print(lv+" ");
            lv++;
        }
        s.close();
    }
}