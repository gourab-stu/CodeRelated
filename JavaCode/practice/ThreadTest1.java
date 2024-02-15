class ThreadTest1_myThread1 extends Thread {
    public ThreadTest1_myThread1(String name) {
        super(name);
    }

    @Override
    public void run() {
        while (true)
            System.out.println("{\tThe name of the thread is " + this.getName() + "\tThe id of the thread is " + this.getId() +"\t}\n");
    }
}

class ThreadTest1_myThread2 extends Thread {
    public ThreadTest1_myThread2(String name) {
        super(name);
    }

    @Override
    public void run() {
        while (true)
            System.out.println("{\tThe name of the thread is " + this.getName() + "\tThe id of the thread is " + this.getId() +"\t}\n");
    }
}

public class ThreadTest1 {
    public static void main(String[] args) {
        ThreadTest1_myThread1 t1 = new ThreadTest1_myThread1("Gourab");
        ThreadTest1_myThread2 t2 = new ThreadTest1_myThread2("Acharjee");
        t1.start();
        t2.start();
    }
}
