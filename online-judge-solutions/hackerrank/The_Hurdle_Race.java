import java.util.Scanner;

public class The_Hurdle_Race {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n, k, i;
        n = input.nextInt();
        k = input.nextInt();
        int[] height = new int[n];
        for (i = 0; i < n; i++) height[i] = input.nextInt();
        int max = height[0];
        for (i = 0; i < n; i++) {
            if (height[i] > max) max = height[i];
        }
        System.out.println(Math.max(max - k, 0));
    }
}
