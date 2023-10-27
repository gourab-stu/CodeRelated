public class thread4 extends Thread
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
        thread4 t1=new thread4(); 
        thread4 t2=new thread4(); 
        t1.start(); 
        t2.start(); 
    } 
}