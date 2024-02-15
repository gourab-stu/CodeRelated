class Parent {
    int x = 10;
    public void display() {
        System.out.println("Parent class method");
    }
}

class Child extends Parent {
    int x = 20;
    public void display() {
        System.out.println("Child class method");
    }

    public void accessSuperclassMembers() {
        System.out.println(super.x); // Access the x field from the superclass
        super.display(); // Call the display method from the superclass
        display();
    }
}

public class UsingSuper2 {
    public static void main(String[] args) {
        Child ob = new Child();
        ob.accessSuperclassMembers();
    }
}
