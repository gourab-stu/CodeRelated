class test1 {
    public int a, b;

    test1() {
        System.out.println("Initializing test1 with 0");
        a = 0;
        b = 0;
    }

    test1(int... v) {
        System.out.println("Initializing test1 with given values");
        a = v[0];
        b = v[1];
    }

    public void sum() {
        int sum = a + b;
        System.out.println("sum is " + sum);
    }
}

public class UsingSuper1 extends test1 {
    UsingSuper1() {
        super();
        System.out.println("Called super");
        sum();
    }

    UsingSuper1(int... a) {
        super(a);
        System.out.println("Called super with parameter");
        sum();
    }

    public static void main(String[] args) {
        UsingSuper1 ob1 = new UsingSuper1();
        UsingSuper1 ob2 = new UsingSuper1(25, 50);
    }
}