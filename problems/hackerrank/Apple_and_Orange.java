import java.util.Scanner;

public class Apple_and_Orange {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int s = input.nextInt();
        int t = input.nextInt();
        int a = input.nextInt();
        int b = input.nextInt();
        int m = input.nextInt();
        int n = input.nextInt();
        int[] apple = new int[m];
        int[] orange = new int[n];
        int i, apple_in = 0, orange_in = 0;
        for (i = 0; i < m; i++) {
            apple[i] = input.nextInt();
            if (a + apple[i] >= s && a + apple[i] <= t) apple_in++;
        }
        for (i = 0; i < n; i++) {
            orange[i] = input.nextInt();
            if (b + orange[i] <= t && b + orange[i] >= s) orange_in++;
        }
        System.out.println(apple_in + "\n" + orange_in);
    }
}
