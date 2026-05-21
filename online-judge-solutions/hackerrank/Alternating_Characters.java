import java.util.Scanner;

public class Alternating_Characters {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        input.nextLine();
        for (int i = 0; i < n; i++) {
            String word = input.nextLine();
            int count = 0;
            for (int j = 0; j < word.length() - 1; j++) {
                if (word.charAt(j) == word.charAt(j + 1)) count++;
            }
            System.out.println(count);
        }
    }
}