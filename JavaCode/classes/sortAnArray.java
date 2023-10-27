public class sortAnArray {
    public static void main(String[] args) {
        int[] arr = ArrayOp.arrayInitialization();
        System.out.println("The sorted array is");
        arr = ArrayOp.selectionSort(arr);
        System.out.println(arr.length);
        ArrayOp.display(arr);
    }
}
