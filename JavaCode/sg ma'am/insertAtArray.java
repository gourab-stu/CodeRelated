import java.util.Scanner;

public class insertAtArray
{
    public static int [] arr=new int[100];
    public static int size;
    public static Scanner s=new Scanner(System.in);
    insertAtArray()
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
    public static int insert(int element, int position)
    {
        int s=0;
        for(int i=0; i<size; i++)
        {
            if((i+1)==position)
            {
                size++;
                for(int j=size; j>=i; j--)
                {
                    arr[j+1]=arr[j];
                }
                arr[i]=element;
                s++;
            }
        }
        return s;
    }
    public static void display()
    {
        System.out.println("After insertion the new array is");
        for(int i=0; i<size; i++)
        {
            System.out.println("arr["+i+"]="+arr[i]);
        }
    }
    public static void main(String args[])
    {
        insertAtArray ob=new insertAtArray();
        int pos, n;
        System.out.print("Enter the position to insert element: ");
        pos=s.nextInt();
        System.out.print("Enter the element: ");
        n=s.nextInt();
        System.out.println(insert(n, pos)+" element added successfully");
        display();
    }
}