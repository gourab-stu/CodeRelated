import java.util.Scanner;

public class DefiningArrayDynamically {
    public static Scanner s = new Scanner(System.in);

    public static int[] arrayInitialization() {
        int size;
        System.out.print("Enter the size of the array: ");
        size = s.nextInt();
        if (size == 0)
            System.exit(0);
        int arr[] = new int[size];
        System.out.println("Enter the array elements");
        for (int i = 0; i < size; i++) {
            System.out.print("arr[" + i + "]=");
            arr[i] = s.nextInt();
        }
        return arr;
    }

    public static int sum(int[] array) {
        int sum = 0;
        for (int i : array)
            sum = sum + i;
        return sum;
    }

    public static double avg(int[] array) {
        return (double) sum(array) / (double) array.length;
    }

    public static void main(String[] args) {
        int arr[] = arrayInitialization();
        System.out.println("Sum of all the array elements is " + sum(arr));
        System.out.println("Average of all the array elements is " + avg(arr));
    }
}