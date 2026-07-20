import java.util.Scanner;

public class Designer_PDF_Viewer {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int[] alphabets = new int[26];
        for (int i = 0; i < 26; i++) alphabets[i] = input.nextInt();
        String word = input.next();
        int max = 0;
        int[] position = new int[word.length()];
        for (int i = 0; i < word.length(); i++) {
            position[i] = word.charAt(i) - 97;
            if (alphabets[position[i]] > max) max = alphabets[position[i]];
        }
        System.out.println(max * word.length());
    }
}