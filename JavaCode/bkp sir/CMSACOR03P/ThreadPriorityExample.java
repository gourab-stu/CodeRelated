class PriorityThread extends Thread {
    public PriorityThread(String name, int priority) {
        super(name);
        setPriority(priority);
    }

    public void run() {
        for (int i = 1; i <= 5; i++) {
            System.out.println(getName() + " is running (" + i + ")");
            try {
                Thread.sleep(100);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}

public class ThreadPriorityExample {
    public static void main(String[] args) {
        PriorityThread thread1 = new PriorityThread("Thread 1", Thread.MIN_PRIORITY);
        PriorityThread thread2 = new PriorityThread("Thread 2", Thread.NORM_PRIORITY);
        PriorityThread thread3 = new PriorityThread("Thread 3", Thread.MAX_PRIORITY);

        thread1.start();
        thread2.start();
        thread3.start();
    }
}
