public class thread2 implements Runnable
{ 
    public void run()
    { 
        System.out.println("thread is running..............................."); 
    } 
    
    public static void main(String args[])
    { 
        thread2 ob=new thread2(); 
        Thread t1 =new Thread(ob); 
        t1.start(); 
    } 
} 