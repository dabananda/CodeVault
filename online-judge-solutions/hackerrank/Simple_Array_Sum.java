import java.util.Scanner;

public class Simple_Array_Sum {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int sum = 0;
        int[] array = new int[n];
        for (int i = 0; i < n; i++) {
            array[i] = input.nextInt();
            sum = sum + array[i];
        }
        System.out.println(sum);
    }
}