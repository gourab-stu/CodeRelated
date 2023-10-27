public class thread3 extends Thread
{
    public void run()
    {
        for(int i=1;i<5;i++)
        {
            try
            {
                Thread.sleep(300);
            }
            catch(InterruptedException e)
            {
                System.out.println(e);
            }
            System.out.println(i);
        }
    }
    public static void main(String args[])
    {
        thread3 t1=new thread3();
        thread3 t2=new thread3();
        t1.run();
        t2.run();
    }
}