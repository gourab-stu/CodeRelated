import java.util.Scanner;

public class Pattern
{
    public static Scanner s=new Scanner(System.in);
    public void pattern1(int n)
    {
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n-i; j++)
                System.out.print(" ");
            for(int k=1; k<=2*i-1; k++)
                System.out.print("*");
            System.out.println();
        }
    }
    public void pattern2(int n)
    {
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=i; j++)
                System.out.print("*");
            System.out.println();
        }
    }
    public void pattern3(int n)
    {
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n-i; j++)
                System.out.print(" ");
            for(int k=1; k<=i; k++)
                System.out.print("*");
            System.out.println();
        }
    }
    public void pattern4(int n)
    {
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n-i; j++)
                System.out.print(" ");
            for(int k=1; k<=i; k++)
                System.out.print("* ");
            System.out.println();
        }
    }
    public void pattern5(int n)
    {
        for(int i=1; i<=n; i++)
        {
            for(int j=0; j<=n-i; j++)
                System.out.print("*");
            System.out.println();
        }
    }
    public void pattern6(int n)
    {
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=i-1; j++)
                System.out.print(" ");
            for(int k=0; k<=n-i; k++)
                System.out.print("*");
            System.out.println();
        }
    }
    public void pattern7(int n)
    {
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=i-1; j++)
                System.out.print(" ");
            for(int k=0; k<=n-i; k++)
                System.out.print("* ");
            System.out.println();
        }
    }
    public void pattern8(int n)
    {
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=i; j++)
                System.out.print(i);
            System.out.println();
        }
    }
    public void pattern9(int n)
    {
        int k=1;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=i; j++, k++)
                System.out.print(k+"\t");
            System.out.println();
        }
    }
    public void pattern10(int n)
    {
        int count = 0, k = 0;
        for(int i=1; i<=n; ++i)
        {
            for(int space=1; space<=n-i; ++space, ++count)
                System.out.print("\t");
            for(    ; k!=2*i-1; ++k)
            {
                if(count<=n-1)
                {
                    System.out.print((i+k)+"\t");
                    ++count;
                }
            }
            count=k=0;
            System.out.println();
        }
    }
    public void pattern11(int n)
    {
        int i, j, k1, k2;
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n-i; j++)
                System.out.print(" ");
            for(k1=1; k1<i; k1++)
                System.out.print(k1);
            for(k2=k1; k2>=1; k2--)
                System.out.print(k2);
            System.out.println();
        }
    }
    public int menu()
    {
        System.out.println("OPTIONS TO SELECT");
        System.out.println("\t1. Triangle pattern of stars");
        System.out.println("\t2. Simple pyramid pattern of stars");
        System.out.println("\t3. Rotated pyramid pattern of stars");
        System.out.println("\t4. Another triangle pattern of stars");
        System.out.println("\t5. Inverted pyramid pattern of stars");
        System.out.println("\t6. Rotated inverted pyramid pattern of stars");
        System.out.println("\t7. Inverted triangle pattern of stars");
        System.out.println("\t8. Number pyramid pattern of numbers");
        System.out.println("\t9. Continuous number pyramid pattern of numbers");
        System.out.println("\t10. Continuous number pyramid pattern of numbers");
        System.out.println("\t11. Palindrome pyramid pattern of numbers");
        System.out.print("Enter choice: ");
        return s.nextInt(); 
    }
    public static void main(String args[])
    {
        System.out.print("Enter the number of lines: ");
        int rows=s.nextInt();
        boolean i=true;
        Pattern ob=new Pattern();
        while(i)
        {
            switch(ob.menu())
            {
                case 1:
                    ob.pattern1(rows);
                    i=false;
                    break;
                
                case 2:
                    ob.pattern2(rows);
                    i=false;
                    break;

                case 3:
                    ob.pattern3(rows);
                    i=false;
                    break;
                
                case 4:
                    ob.pattern4(rows);
                    i=false;
                    break;
                
                case 5:
                    ob.pattern5(rows);
                    i=false;
                    break;
                
                case 6:
                    ob.pattern6(rows);
                    i=false;
                    break;
                
                case 7:
                    ob.pattern7(rows);
                    i=false;
                    break;
                
                case 8:
                    ob.pattern8(rows);
                    i=false;
                    break;

                case 9:
                    ob.pattern9(rows);
                    i=false;
                    break;
                
                case 10:
                    ob.pattern10(rows);
                    i=false;
                    break;

                case 11:
                    ob.pattern11(rows);
                    i=false;
                    break;
                
                default:
                    System.out.println("ENTER VALID CHOICE");
                    i=true;
            }
        }
    }
}