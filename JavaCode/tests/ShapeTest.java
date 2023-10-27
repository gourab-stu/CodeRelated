import java.util.Scanner;

import Shape.*;

public class ShapeTest {
    public static void main(String[] args) {
        System.out.print("Enter length and width: ");
        Scanner s = new Scanner(System.in);
        Rectangle r = new Rectangle(s.nextDouble(), s.nextDouble());
        System.out.println("The area is " + r.area());
        System.out.println("The perimeter is " + r.perimeter());
    }
}
