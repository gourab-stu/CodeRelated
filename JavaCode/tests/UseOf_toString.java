class MyClass {
    private int id;
    private String name;

    public MyClass(int id, String name) {
        this.id = id;
        this.name = name;
    }

    // @Override
    // public String toString() {
    //     return "MyClass [id=" + id + ", name=" + name + "]";
    // }
}

public class UseOf_toString {
    public static void main(String[] args) {
        MyClass ob = new MyClass(3134, "Gourab");
        System.out.println(ob);
        String message = "Object details: " + ob.toString();
        System.out.println(message);
        System.out.println(ob.toString());
    }
}
