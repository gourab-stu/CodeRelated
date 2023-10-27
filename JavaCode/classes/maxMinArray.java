public class maxMinArray {
    public static void main(String[] args) {
        int[] arr = ArrayOp.arrayInitialization();
        System.out.println("The maximum value within the array is " + ArrayOp.max(arr) + " which is present in index");
        for (int x : ArrayOp.linearSearch(arr, ArrayOp.max(arr)))
            System.out.println(x);
        System.out.println("The minimum value within the array is " + ArrayOp.min(arr) + " which is present in index");
        for (int x : ArrayOp.linearSearch(arr, ArrayOp.min(arr)))
            System.out.println(x);
    }
}
