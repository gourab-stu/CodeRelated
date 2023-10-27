import java.util.Scanner;

public class searchFromArray
{
    public static int [] arr=new int[100];
    public static int size;
    public static Scanner s=new Scanner(System.in);
    searchFromArray()
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
    public int search(int element)
    {
        int i, location=0;
        for(i=0; i<size; i++)
        {
            if(arr[i]==element)
            {
                location=1;
                break;
            }
        }
        if(location==1)
            return i+1;
        else
            return location;
    }
    public static void main(String args[])
    {
        searchFromArray ob=new searchFromArray();
        System.out.print("Enter the element to search: ");
        int n=s.nextInt();
        int r=ob.search(n);
        if(r==0)
            System.out.println("Element not found");
        else
            System.out.println("Element found at location "+r);
    }
}