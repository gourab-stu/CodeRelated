interface Father {
    public void Father();
}

interface Mother {
    public void Mother();
}

class Child implements Father, Mother {
    public void Child() {
        System.out.println("This is our child");
    }
    public void Father() {
        System.out.println("I am his father");
    }
    public void Mother() {
        System.out.println("I am his mother");
    }
}

public class MultipleInheritanceExample {
    public static void main(String[] args) {
        Child ob = new Child();
        ob.Father();
        ob.Mother();
        ob.Child();
        System.out.println("Calling from main method");
    }
}