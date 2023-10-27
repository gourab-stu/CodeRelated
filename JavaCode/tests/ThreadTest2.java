class ThreadTest2_myThread1 implements Runnable {
    public void run() {
        while(true)
            System.out.println("Gourab");
    }
}

class ThreadTest2_myThread2 implements Runnable {
    public void run() {
        while(true)
            System.out.println("Acharjee");
    }
}

public class ThreadTest2 {
    public static void main(String[] args) {
        ThreadTest2_myThread1 ob1 = new ThreadTest2_myThread1();
        Thread t1 = new Thread(ob1, "Gourab");

        ThreadTest2_myThread2 ob2 = new ThreadTest2_myThread2();
        Thread t2 = new Thread(ob2, "Acharjee");

        t1.start();
        t2.start();
    }
}
