import java.util.Scanner;

public class Service_Lane {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int m = input.nextInt();
        int n = input.nextInt();
        int[] width = new int[m];
        for (int i = 0; i < m; i++) width[i] = input.nextInt();
        for (int i = 0; i < n; i++) {
            int start = input.nextInt();
            int end = input.nextInt();
            int minimum = width[start];
            for (int j = start; j <= end; j++) {
                if (width[j] < minimum) minimum = width[j];
            }
            System.out.println(minimum);
        }
    }
}
