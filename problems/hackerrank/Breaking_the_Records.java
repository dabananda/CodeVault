import java.util.Scanner;

public class Breaking_the_Records {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt(), i;
        int[] array = new int[n];
        for (i = 0; i < n; i++) {
            array[i] = input.nextInt();
        }
        int max = array[0], min = array[0], maxn = 0, minn = 0;
        for (i = 0; i < n; i++) {
            if (array[i] > max) {
                max = array[i];
                maxn++;
            }
            if (array[i] < min) {
                min = array[i];
                minn++;
            }
        }
        System.out.println(maxn + " " + minn);
    }
}
