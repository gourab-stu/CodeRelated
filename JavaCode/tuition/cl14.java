// created on 14.6.23, classwork

import java.io.*;

public class cl14
{
    public static void main(String args[]) throws IOException
    {
        InputStreamReader ob=new InputStreamReader(System.in);
        BufferedReader br=new BufferedReader(ob);
        System.out.print("Enter a string: ");
        String s=br.readLine();
        System.out.println(s);
    }
}