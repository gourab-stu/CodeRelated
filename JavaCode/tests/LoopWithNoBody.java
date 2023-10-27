import java.util.Scanner;

public class LoopWithNoBody {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int uv, lv;
        System.out.println("Enter the lower value: ");
        lv = s.nextInt();
        System.out.println("Enter the upper value: ");
        uv = s.nextInt();
        while (++lv < --uv);
        System.out.println("The middle point is: " + lv);
    }
}
