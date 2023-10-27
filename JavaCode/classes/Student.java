public class Student {
    public String name;
    public int age;

    // Constructor to initialize a Student object
    public Student(String name, int age) {
        this.name = name;
        this.age = age;
    }

    public static void main(String[] args) {
        Student student1 = new Student("Gourab", 18);
        Student student2 = student1;
        System.out.println("Name: " + student1.name + "\tAge: " + student1.age);
        System.out.println("Name: " + student2.name + "\tAge: " + student2.age);
        student1.age = 19;
        student1.name = "Preeti";
        System.out.println("Name: " + student1.name + "\tAge: " + student1.age);
        System.out.println("Name: " + student2.name + "\tAge: " + student2.age);
        student2.age = 18;
        student2.name = "Gourab";
        System.out.println("Name: " + student1.name + "\tAge: " + student1.age);
        System.out.println("Name: " + student2.name + "\tAge: " + student2.age);
    }
}
