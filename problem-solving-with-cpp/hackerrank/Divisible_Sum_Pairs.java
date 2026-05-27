import java.util.Scanner;

public class Divisible_Sum_Pairs {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int k = input.nextInt();
        int[] array = new int[n];
        int count = 0;
        for (int i = 0; i < n; i++) array[i] = input.nextInt();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) if ((array[i] + array[j]) % k == 0) count++;
        }
        System.out.println(count);
    }
}