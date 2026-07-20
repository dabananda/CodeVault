import java.util.Scanner;

public class CamelCase {
    public static void main(String[] args) {
        int count = 0;
        Scanner input = new Scanner(System.in);
        String sentence = input.nextLine();
        char[] charArray = sentence.toCharArray();
        for (char c : charArray) {
            if (Character.isUpperCase(c)) {
                count++;
            }
        }
        System.out.println(count + 1);
    }
}