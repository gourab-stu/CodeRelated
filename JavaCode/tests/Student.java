public class Student {
    private String name;
    private int age;

    // Constructor to initialize a Student object
    public Student(String name, int age) {
        this.name = name;
        this.age = age;
    }

    // Getter methods for name and age
    public String getName() {
        return name;
    }

    public int getAge() {
        return age;
    }

    // Method to create and return a Student object
    public static Student createStudent(String name, int age) {
        // Create a new Student object and initialize it
        Student student = new Student(name, age);
        
        // Return the created object
        return student;
    }

    public static void main(String[] args) {
        // Calling the createStudent method to create a Student object
        Student student1 = Student.createStudent("Gourab", 18);

        // Accessing object properties using getter methods
        System.out.println("Name: " + student1.getName());
        System.out.println("Age: " + student1.getAge());
    }
}
