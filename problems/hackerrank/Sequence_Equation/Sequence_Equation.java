import java.util.Scanner;

public class Sequence_Equation {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] array = new int[n];
        int[] x = new int[n];
        for (int i = 0; i < n; i++) array[i] = input.nextInt();
        for (int i = 0; i < n; i++) {
            x[i] = i + 1;
            for (int j = 0; j < n; j++) {
                if (x[i] == array[j]) {
                    for (int k = 0; k < n; k++) {
                        if ((j + 1) == array[k]) System.out.println((k + 1));
                    }
                }
            }
        }
    }
}
