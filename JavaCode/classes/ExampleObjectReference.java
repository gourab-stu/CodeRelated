import java.util.Scanner;

class ObjectReference {
    public int a, b;
    Scanner s = new Scanner(System.in);

    ObjectReference() {
        System.out.println("This is default constructor");
        System.out.print("Enter 1st number: ");
        a = s.nextInt();
        System.out.print("Enter 2nd number: ");
        b = s.nextInt();
    }

    ObjectReference(int a, int b) {
        this.a = a;
        this.b = b;
        System.out.println("Value caught using parameterized constructor");
    }

    ObjectReference(ObjectReference object) {
        this.a = object.a;
        this.b = object.b;
        System.out.println("Value caught using object as argument");
    }

    public int min(int a, int b) {
        if (a < b)
            return a;
        else
            return b;
    }

    public int max(int a, int b) {
        if (a > b)
            return a;
        else
            return b;
    }

    public int hcf() {
        return hcf(a, b);
    }

    public int hcf(int x, int y) {
        int min = min(x, y), max = max(x, y);
        if (max % min == 0)
            return min;
        else
            return hcf(min, max % min);
    }

    public int lcm() {
        return lcm(a, b);
    }

    public int lcm(int x, int y) {
        return hcf(x, y) * x / hcf(x, y) * y / hcf(x, y);
    }
}

public class ExampleObjectReference {
    public static void main(String[] args) {
        ObjectReference ob1 = new ObjectReference();
        ObjectReference ob2 = new ObjectReference(ob1.a, ob1.b);
        ObjectReference ob3 = new ObjectReference(ob2);
        ObjectReference ob4 = ob3;
        System.out.printf("HCF of ob1, ob2, ob3, ob4 is %d, %d, %d, %d\n", ob1.hcf(), ob2.hcf(), ob3.hcf(), ob4.hcf());
        System.out.printf("LCM of ob1, ob2, ob3, ob4 is %d, %d, %d, %d\n", ob1.lcm(), ob2.lcm(), ob3.lcm(), ob4.lcm());
        ob3.a++;
        System.out.println("After increment...");
        System.out.printf("HCF of ob1, ob2, ob3, ob4 is %d, %d, %d, %d\n", ob1.hcf(), ob2.hcf(), ob3.hcf(), ob4.hcf());
        System.out.printf("LCM of ob1, ob2, ob3, ob4 is %d, %d, %d, %d\n", ob1.lcm(), ob2.lcm(), ob3.lcm(), ob4.lcm());
        System.out.println("ob1.a = " + ob1.a + " , ob1.b = " + ob1.b);
        System.out.println("ob2.a = " + ob2.a + " , ob2.b = " + ob2.b);
        System.out.println("ob3.a = " + ob3.a + " , ob3.b = " + ob3.b);
        System.out.println("ob4.a = " + ob4.a + " , ob4.b = " + ob4.b);
        ob3.a++;
        ob3.b++;
        System.out.println("After increment...");
        System.out.println("ob1.a = " + ob1.a + " , ob1.b = " + ob1.b);
        System.out.println("ob2.a = " + ob2.a + " , ob2.b = " + ob2.b);
        System.out.println("ob3.a = " + ob3.a + " , ob3.b = " + ob3.b);
        System.out.println("ob4.a = " + ob4.a + " , ob4.b = " + ob4.b);
    }
}
