public class sortAnArray {
    public static void main(String[] args) {
        int[] arr = ArrayOp.arrayInitialization();
        arr = ArrayOp.countingSort(arr);
        System.out.println("The sorted array is");
        ArrayOp.display(ArrayOp.countingSort(arr));
    }
}
