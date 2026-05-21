import java.util.Scanner;

public class Birthday_Cake_Candles {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n, i;
        n = input.nextInt();
        int[] array = new int[n];
        for (i = 0; i < n; i++) {
            array[i] = input.nextInt();
        }
        int max = array[0];
        for (i = 0; i < n; i++) {
            if (array[i] > max) max = array[i];
        }
        int count = 0;
        for (i = 0; i < n; i++) {
            if (max == array[i]) count++;
        }
        System.out.println(count);
    }
}
