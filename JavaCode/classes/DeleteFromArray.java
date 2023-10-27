import java.util.Scanner;

public class DeleteFromArray {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int[] arr = ArrayOp.arrayInitialization();
        System.out.print("Enter the index to delete element: ");
        int index = s.nextInt();
        System.out.println("The array after deleting element is");
        ArrayOp.display(ArrayOp.removeIndex(arr, index));
        System.out.print("Enter the element you want to delete: ");
        int element = s.nextInt();
        System.out.println("The array after deleting the element(s) is");
        ArrayOp.display(ArrayOp.removeElement(arr, element));
    }
}
