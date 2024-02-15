import java.util.Scanner;

public class TernaryOperatorExampleWithLeapYear {
    public static void main(String args[]) {
        Scanner s = new Scanner(System.in);
        System.out.println("Enter year: ");
        int year = s.nextInt();
        String ans = year > 0 ? (year % 100 == 0 ? (year % 400 == 0 ? "year is leap year" : "year is not leap year")
                : (year % 4 == 0 ? "year is leap year" : "year is not leap year")) : "year is invalid";
        System.out.println(ans);
    }
}
