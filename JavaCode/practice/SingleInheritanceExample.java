class A {
    public void msgFromA() {
        System.out.println("Hello this is A");
    }
}

class B extends A {
    public void msgFromB() {
        System.out.println("Hello B speaking");
    }
}

public class SingleInheritanceExample {
    public static void main(String[] args) {
        B ob = new B();
        ob.msgFromA();
        ob.msgFromB();
        System.out.println("And this is the main method");
    }
}