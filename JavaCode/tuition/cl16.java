// created on 14.6.23, classwork

import java.io.*;

public class cl16
{
    public static void main(String args[]) throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter an integer: ");
        int n=Integer.parseInt(br.readLine());
        System.out.println(n);
    }
}