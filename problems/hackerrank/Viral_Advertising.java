import java.util.Scanner;

public class Viral_Advertising {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int d = input.nextInt();
        int shared = 5, liked = 2, cumulative = 2;
        for (int i = 2; i <= d; i++) {
            shared = (shared / 2) * 3;
            liked = shared / 2;
            cumulative = cumulative + liked;
        }
        System.out.println(cumulative);
    }
}
