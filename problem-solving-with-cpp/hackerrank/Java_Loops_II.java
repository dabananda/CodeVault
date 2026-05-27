import java.util.Scanner;

public class Java_Loops_II {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a, b, n, i, j, value, sum;
        j = input.nextInt();
        for (int k = 1; k <= j; k++) {
            a = input.nextInt();
            b = input.nextInt();
            n = input.nextInt();
            sum = a + b;
            System.out.print(sum + " ");
            for (i = 1; i < n; i++) {
                value = (int) (b * Math.pow(2,i));
                sum = sum + value;
                System.out.print(sum + " ");
            }
            System.out.println();
        }
    }
}
