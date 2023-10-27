class A {
    A() {
        System.out.println("Hello this is A");
    }
}

class B extends A {
    B() {
        System.out.println("Hello B speaking");
    }
}

class C extends B {
    C() {
        System.out.println("Hello I'm C");
    }
}

public class MultilevelInheritanceExample {
    public static void main(String[] args) {
        C ob = new C();
        System.out.println("And this is the main method");
    }
}