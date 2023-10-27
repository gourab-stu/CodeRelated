import java.util.Scanner;

public class arrayReverse
{
    public static int [] arr=new int[100];
    public static int size;
    arrayReverse()
    {
        Scanner s=new Scanner(System.in);
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
        s.close();
    }
    public void reverseArray()
    {
        int temp, a=size;
        for(int i=0; i<size/2; i++)
        {
            temp=arr[i];
            arr[i]=arr[--a];
            arr[a]=temp;
        }
    }
    public void display()
    {
        System.out.println("After reverse the new array is");
        for(int i=0; i<size; i++)
        {
            System.out.println("arr["+i+"]="+arr[i]);
        }
    }
    public static void main(String args[])
    {
        arrayReverse ob=new arrayReverse();
        ob.reverseArray();
        ob.display();
    }
}