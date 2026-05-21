import java.util.Scanner;

public class Diagonal_Difference {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[][] array = new int[n][n];
        int d1 = 0, d2 = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                array[i][j] = input.nextInt();
                if (i == j) d1 = d1 + array[i][j];
                if (i + j == n - 1) d2 = d2 + array[i][j];
            }
        }
        System.out.println(Math.abs(d1 - d2));
    }
}