class Father {
    Father() {
        System.out.println("I am the father");
    }
}

class Son extends Father {
    Son() {
        System.out.println("I am his son");
    }
}

class Daughter extends Father {
    Daughter() {
        System.out.println("I am his daughter");
    }
}

public class HierarchicalInheritanceExample {
    public static void main(String[] args) {
        Son ob1 = new Son();
        Daughter ob2 = new Daughter();
        System.out.println("This is the main method");
    }
}
