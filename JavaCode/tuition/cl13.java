// created on 14.6.23, classwork

import java.io.*;

public class cl13
{
    public static void main(String args[]) throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter a character: ");
        char ch=(char)br.read();
        System.out.println(ch);
    }
}