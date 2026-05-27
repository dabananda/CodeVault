import java.util.Scanner;

public class A_Very_Big_Sum {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        long n = input.nextLong();
        long sum = 0;
        long[] array = new long[(int) n];
        for (int i = 0; i < n; i++) {
            array[i] = input.nextInt();
            sum = sum + array[i];
        }
        System.out.println(sum);
    }
}