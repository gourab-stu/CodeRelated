import java.util.InputMismatchException;
import java.util.Scanner;

public class BinarySearchingExample {
    public int[] arr = new int[100];
    public int value;
    public static Scanner s = new Scanner(System.in);

    BinarySearchingExample() {
        for (int i = 0, k = 0; i < 100; i++, k = k + 2)
            arr[i] = k;
    }

    public void BinarySearching() {
        int l = 0, h = arr.length - 1, mid;
        while (l <= h) {
            mid  = (l + h) / 2;
            if (value == arr[mid]) {
                System.out.println("Element found at location " + mid);
                return;
            } else {
                if (value < arr[mid])
                    h = mid - 1;
                else
                    l = mid + 1;
            }
        }
        System.out.println("Value not found");
    }

    public static void main(String[] args) {
        BinarySearchingExample ob = new BinarySearchingExample();
        System.out.print("Enter the element to search: ");
        try {
            ob.value = s.nextInt();
        } catch (InputMismatchException e) {
            System.out.println("This is an array containing integer element.\nCannot search for that value.");
            return;
        }
        ob.BinarySearching();
    }
}
