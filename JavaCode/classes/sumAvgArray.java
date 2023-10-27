public class sumAvgArray {
    public static void main(String[] args) {
        int[] arr = ArrayOp.arrayInitialization();
        System.out.println("The summation of all the elements in the array is " + ArrayOp.sum(arr));
        System.out.println("The average of all the elements in the array is " + ArrayOp.avg(arr));
    }
}
