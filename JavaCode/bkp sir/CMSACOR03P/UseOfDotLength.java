import java.util.Scanner;

public class UseOfDotLength {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int a[][] = new int[5][5];
        for(int i = 0, k = 0; i < a.length; i++) {
            for(int j = 0; j <= i; j++) {
                a[i][j] = k;
                k++;
            }
            k--;
        }
        System.out.println("The jagged array is initialzed");
        System.out.println("The jagged array is");
        for(int i = 0; i < a.length; i++) {
            for(int j = 0; j < i; j++)
                System.out.print(a[i][j] + "\t");
            System.out.println();
        }
    }
}
