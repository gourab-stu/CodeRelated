class Grandfather {
    Grandfather() {
        System.out.println("I am the grandfather");
    }
}

class Father extends Grandfather {
    Father() {
        System.out.println("I am his son, your father");
    }
}

class Son extends Father {
    Son() {
        System.out.println("This is me, his son");
    }
}

class Daughter extends Father {
    Daughter() {
        System.out.println("This is me, his daughter");
    }
}

public class HybridInheritanceExample {
    public static void main(String[] args) {
        Son ob1 = new Son();
        Daughter ob2 = new Daughter();
        System.out.println("This is the main method");
    }
}
