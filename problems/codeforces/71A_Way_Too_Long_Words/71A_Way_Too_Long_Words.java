import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        for (int i = 1; i <= n; i++) {
            String word = input.next();
            if (word.length() > 10) {
                int value = word.length() - 2;
                System.out.println(word.charAt(0) + "" + value + "" + word.charAt(word.length() - 1));
            }
            else System.out.println(word);
        }
    }
}
