import java.util.Scanner;

public class Intro_to_Tutorial_Challenges {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int V = input.nextInt();
        int n = input.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = input.nextInt();
        }
        for (int i = 0; i < n; i++) {
            if (arr[i] == V) {
                System.out.println(i);
            }
        }
    }
}
