import java.util.Scanner;

public class Utopian_Tree {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] array = new int[n];
        double raise;
        for (int i = 0; i < n; i++) array[i] = input.nextInt();
        for (int i = 0; i < n; i++) {
            if (array[i] % 2 == 0) {
                raise = ((Math.pow(2, (double) array[i] / 2) * 2) - 1);
            } else {
                raise = (((Math.pow(2, (double) (array[i] - 1) / 2) * 2) - 1) * 2);
            }
            System.out.println((int) raise);
        }
    }
}