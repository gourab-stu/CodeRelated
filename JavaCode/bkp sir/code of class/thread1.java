public class thread1 extends Thread
{
    public void run()
    {  
        System.out.println("thread is running..............");  
    }  
    public static void main(String args[])
    {  
        thread1 ob=new thread1();  
        ob.start();
    }  
}