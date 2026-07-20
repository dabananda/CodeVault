import java.util.Scanner;

public class Angry_Professor {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        for (int i = 0; i < t; i++) {
            int n = input.nextInt();
            int k = input.nextInt();
            int[] array = new int[n];
            int count = 0;
            for (int j = 0; j < n; j++) {
                array[i] = input.nextInt();
                if (array[i] <= 0) count++;
            }
            if (count >= k) System.out.println("NO");
            else System.out.println("YES");
        }
    }
}
