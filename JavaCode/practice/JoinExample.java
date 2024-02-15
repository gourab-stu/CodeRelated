class MyThread extends Thread {
    public void run() {
        System.out.println("MyThread is running.");
        try {
            Thread.sleep(5000); // Simulate some work
        } catch (InterruptedException e) {
            System.out.println("MyThread interrupted.");
        }
        System.out.println("MyThread finished.");
    }
}

public class JoinExample {
    public static void main(String[] args) throws InterruptedException {
        MyThread myThread = new MyThread();
        myThread.start(); // Start MyThread

        System.out.println("Main thread is doing some work.");
        
        // Wait for MyThread to finish
        myThread.join();

        System.out.println("Main thread finished.");
    }
}
