import java.util.InputMismatchException;
import java.util.Scanner;

public class SelectionSort {
    public static int[] arr;
    public static int size = 0;
    public static Scanner s = new Scanner(System.in);

    public static void sort() {
        for (int i = 0; i < size - 1; i++) {
            int index = i;
            for (int j = i + 1; j < size; j++)
                if (arr[j] < arr[index])
                    index = j;
            int smallerNumber = arr[index];
            arr[index] = arr[i];
            arr[i] = smallerNumber;
        }
    }

    public static void main(String[] args) {
        try {
            System.out.print("Enter the size of the array: ");
            size = s.nextInt();
            if (size == 0)
                System.exit(0);
            arr = new int[size];
            System.out.println("Enter the array elements");
            for (int i = 0; i < size; i++) {
                System.out.print("arr[" + i + "]=");
                arr[i] = s.nextInt();
            }
        } catch (InputMismatchException e) {
            System.out.println("Invalid input");
            return;
        }
        sort();
        System.out.println("The sorted array is");
        int i = 0;
        for (int x : arr)
            System.out.println("arr[" + (i++) + "]=" + x);
    }
}
