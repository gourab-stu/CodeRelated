import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class ArrayOp {
    public static int[] arr;
    private static Scanner s = new Scanner(System.in);

    /**
     * this is the parameterized constructor that assigns the passed array with the
     * public variable int[] arr
     */
    ArrayOp(int[] array) {
        arr = array;
    }

    /**
     * this method asks the user to enter the size of the array and enter all the
     * array elements
     */
    public static int[] arrayInitialization() {
        try {
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
        } catch (Exception e) {
            System.out.println("Invalid format for an element / size");
        }
        return arr;
    }

    /**
     * this method searches for a given element in a given array and returns how
     * many times the element is present in the given array
     */
    public static int hasHowManyThatElement(int[] array, int element) {
        List arr = Arrays.asList(array);
        return Collections.frequency(arr, element);
    }

    /** this method returns the maximum value within an array */
    public static int max(int[] array) {
        int temp = array[0];
        for (int x : array)
            temp = Number.max(x, temp);
        return temp;
    }

    /** this method returns the minimum value within the array */
    public static int min(int[] array) {
        int temp = array[0];
        for (int x : array)
            temp = Number.min(x, temp);
        return temp;
    }

    /** this method returns the summation of all the elements in an array */
    public static int sum(int[] array) {
        int sum = 0;
        for (int i : array)
            sum = +i;
        return sum;
    }

    /** this method returns the average of all the elements in an array */
    public static double avg(int[] array) {
        return (double) sum(array) / (double) array.length;
    }

    /**
     * this method searches for a given element in an array and encapsulate all the
     * locations in which the given element is present in an array named location[]
     * and returns location[]
     */
    public static int[] linearSearch(int[] array, int element) {
        int n = hasHowManyThatElement(array, element);
        int[] location = new int[n];
        if (n > 0) {
            int i = 0, j = 0;
            for (int x : array) {
                if (x == element) {
                    location[i] = j;
                    i++;
                }
                j++;
            }
        }
        return location;
    }

    /**
     * this method searches for a given element in an array and returns the 1st
     * index of which the element is found
     */
    public static int search(int[] array, int element) {
        int i = 0;
        for (int x : array) {
            if (x == element)
                break;
            i++;
        }
        return i;
    }

    /**
     * this method inserts a given element in a given array and returns the new
     * array
     */
    public static int[] insert(int[] array, int index, int element) {
        int size = array.length + 1, s = 0;
        int[] arr = new int[size];
        for (int i = 0; i < size - 1; i++) {
            if (i == index) {
                arr[i] = element;
                s++;
            }
            arr[i + s] = array[i];
        }
        return arr;
    }

    /** this method deletes a given index from an array and returns the new array */
    public static int[] removeIndex(int[] array, int index) {
        if (index - 1 == array.length)
            return array;
        int size = array.length - 1, i = 0;
        int[] arr = new int[size];
        boolean b = false;
        for (int x : array) {
            if ((i == index) || b) {
                arr[i] = array[i + 1];
                b = true;
            } else
                arr[i] = x;
            i++;
            if (i == size)
                break;
        }
        return arr;
    }

    /**
     * this method removes the mentioned element from an entire array and returns
     * the new array
     */
    public static int[] removeElement(int[] array, int element) {
        if (hasHowManyThatElement(array, element) == array.length)
            return array;
        for (int x : linearSearch(array, element)) {
            array = removeIndex(array, x);
        }
        return array;
    }

    /**
     * this is the method that selectionSort(int[] array) calls to process the given
     * array
     */
    public static void selectionSort() {
        for (int i = 0; i < arr.length - 1; i++) {
            int index = i;
            for (int j = i + 1; j < arr.length; j++)
                if (arr[j] < arr[index])
                    index = j;
            System.out.println("inside selectionSort");
            arr[index] = arr[index] + arr[i];
            arr[i] = arr[index] - arr[i];
            arr[index] = arr[index] - arr[i];
        }
    }

    /**
     * this method uses selection sort algorithm to sort a given array in ascending
     * order of value
     */
    public static int[] selectionSort(int[] array) {
        arr = array;
        selectionSort();
        return arr;
    }

    public static void reverse() {
    }

    /** this method displays the given array passed as argument */
    public static void display(int[] array) {
        int i = 0;
        for (int x : array)
            System.out.println("arr[" + (i++) + "]=" + x);
    }
}
