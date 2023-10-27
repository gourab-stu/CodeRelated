import java.util.Scanner;

public class arrayTraversal
{
    public static int [] arr=new int[100];
    public static int size;
    arrayTraversal()
    {
        Scanner s=new Scanner(System.in);
        System.out.print("Enter the size of the array: ");
        size=s.nextInt();
        if(size==0)
            System.exit(0);
        System.out.println("Enter the array elements");
        for(int i=0; i<size; i++)
        {
            System.out.print("arr["+i+"]=");
            arr[i]=s.nextInt();
        }
        s.close();
    }
    public static void display()
    {
        System.out.println("The array is");
        for(int i=0; i<size; i++)
        {
            System.out.println("arr["+i+"]="+arr[i]);
        }
    }
    public static void main(String args[])
    {
        arrayTraversal ob=new arrayTraversal();
        display();
    }
}