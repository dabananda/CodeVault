import java.util.Scanner;

public class Beautiful_Days_at_the_Movies {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int m = input.nextInt();
        int n = input.nextInt();
        int k = input.nextInt();
        int count = 0;
        for (int i = m; i <= n; i++) {
            int number = i, reversed = 0;
            while (number != 0) {
                reversed = (reversed * 10) + (number % 10);
                number /= 10;
            }
            if ((Math.abs(i - reversed)) % k == 0) count++;
        }
        System.out.println(count);
    }
}
