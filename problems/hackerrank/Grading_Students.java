import java.util.Scanner;

public class Grading_Students {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] array = new int[n];
        for (int i = 0; i < n; i++) {
            array[i] = input.nextInt();
            if (array[i] >= 38) {
                if ((array[i] + 1) % 5 == 0) array[i] = array[i] + 1;
                else if ((array[i] + 2) % 5 == 0) array[i] = array[i] + 2;
                else array[i] = array[i];
            } else array[i] = array[i];
        }
        for (int i = 0; i < n; i++) System.out.println(array[i]);
    }
}