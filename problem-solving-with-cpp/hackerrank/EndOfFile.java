import java.util.Scanner;

public class EndOfFile {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int count = 1;
        while (input.hasNext()) {
            String sentence = input.nextLine();
            System.out.println(count + " " + sentence);
            count++;
        }
    }
}
