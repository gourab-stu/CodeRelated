// created on 14.6.23, classwork

import java.io.*;

public class cl15
{
    public static void main(String args[]) throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter an integer: ");
        String s=br.readLine();
        int n=Integer.parseInt(s);    // parseInt() --> converts string to integer
        System.out.println(n);
    }
}