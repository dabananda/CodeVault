import java.util.Scanner;

public class Maximizing_XOR {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int l = input.nextInt();
        int r = input.nextInt();
        int max = 0;
        for (int i = l; i <= r; i++) {
            for (int j = i; j <= r; j++) {
                if ((i ^ j) > max) {
                    max = (i ^ j);
                }
            }
        }
        System.out.println(max);
    }
}
