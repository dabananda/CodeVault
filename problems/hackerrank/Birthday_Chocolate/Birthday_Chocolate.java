import java.util.Scanner;

public class Birthday_Chocolate {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] array = new int[n];
        for (int i = 0; i < n; i++) array[i] = input.nextInt();
        int d = input.nextInt();
        int m = input.nextInt();
        int result = 0;
        for (int i = 0; i < n - m + 1; i++) {
            int sum = 0;
            for (int j = i; j < i + m; j++) sum += array[j];
            if (sum == d) result++;
        }
        System.out.println(result);
    }
}