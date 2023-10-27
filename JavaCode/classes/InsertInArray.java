import java.util.Scanner;

public class InsertInArray {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int[] arr = ArrayOp.arrayInitialization();
        System.out.print("Enter the index to insert element: ");
        int index = s.nextInt();
        System.out.print("Enter the element to insert: ");
        int element = s.nextInt();
        System.out.println("The final array after inserting element is");
        ArrayOp.display(ArrayOp.insert(arr, index, element));
    }
}
