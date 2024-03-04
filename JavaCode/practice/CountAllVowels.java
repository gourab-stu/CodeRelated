import java.util.Scanner;

public class CountAllVowels {
    public static String input() {
        System.out.print("Enter the word: ");
        Scanner s = new Scanner(System.in);
        String str = s.next();
        return str;
    }

    public static int countVowels(String word) {
        int count = 0;
        for(int i = 0; i < word.length(); i++) {
            if((word.charAt(i) == 'a') || (word.charAt(i) == 'e') || (word.charAt(i) == 'i') || (word.charAt(i) == 'o') || (word.charAt(i) == 'u'))
                count++;
        }
        return count;
    }
    
    public static void main(String[] args) {
        String word = input();
        System.out.println("Number of vowels in word '" + word + "': " + countVowels(word));
    }
}