import java.util.Scanner;

public class SearchInArray {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int[] arr = ArrayOp.arrayInitialization();
        System.out.println("Enter the element to search :");
        int x = s.nextInt();
        if (ArrayOp.occurences(arr, x) == 0) {
            System.out.println("The element is not present in the array");
            System.exit(0);
        } else {
            System.out.println(ArrayOp.occurences(arr, x) + " location(s) found\nThe locations is/are");
            ArrayOp.display(ArrayOp.linearSearch(arr, x));
        }
    }
}
