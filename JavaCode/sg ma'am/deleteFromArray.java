import java.util.Scanner;

public class deleteFromArray
{
    public static int [] arr=new int[100];
    public static int size;
    public static Scanner s=new Scanner(System.in);
    deleteFromArray()
    {
        System.out.print("Enter the size of the array: ");
        size=s.nextInt();
        if(size==0)
            java.lang.System.exit(0);
        System.out.println("Enter the array elements");
        for(int i=0; i<size; i++)
        {
            System.out.print("arr["+i+"]=");
            arr[i]=s.nextInt();
        }
    }
    public static int remove(int position)
    {
        int s=0;
        for(int i=0; i<size; i++)
        {
            if((i+1)==position)
            {
                size--;
                for(int j=i; j<size; j++)
                {
                    arr[j]=arr[j+1];
                }
                s++;
            }
        }
        return s;
    }
    public static void display()
    {
        System.out.println("After deletion the new array is");
        for(int i=0; i<size; i++)
        {
            System.out.println("arr["+i+"]="+arr[i]);
        }
    }
    public static void main(String args[])
    {
        deleteFromArray ob=new deleteFromArray();
        int pos;
        System.out.print("Enter the position to delete element: ");
        pos=s.nextInt();
        System.out.println(remove(pos)+" element deleted successfully");
        display();
    }
}