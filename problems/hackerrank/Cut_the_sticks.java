import java.util.Scanner;

public class Cut_the_sticks {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int N = input.nextInt();
        int[] sticks = new int[1000];
        for (int i = 0; i < N; i++) {
            int stickLen = input.nextInt();
            sticks[stickLen]++;
        }
        int remainingSticks = N;
        System.out.println(remainingSticks);
        for (int i = 0; i < sticks.length; i++) {
            if (sticks[i] > 0) {
                remainingSticks -= sticks[i];
                if (remainingSticks == 0) break;
                System.out.println(remainingSticks);
            }
        }
    }
}