import java.util.Arrays;
import java.util.Scanner;

public class Sock_Merchant {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] array = new int[n];
        for (int i = 0; i < n; i++) array[i] = input.nextInt();
        Arrays.sort(array);
        int count = 0;
        for (int i = 0; i < n - 1; i++) {
            if (i < n && array[i] == array[i + 1]) {
                count++;
                i += 1;
            }
        }
        System.out.println(count);
    }
}
