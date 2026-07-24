import java.util.Scanner;

public class Plus_Minus {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int i, sump = 0, sumn = 0, sumz = 0;
        int n = input.nextInt();
        int[] array = new int[n];
        for (i = 0; i < n; i++) {
            array[i] = input.nextInt();
            if (array[i] > 0) sump++;
            else if (array[i] < 0) sumn++;
            else sumz++;
        }
        double rp = (double) sump / n;
        double rn = (double) sumn / n;
        double rz = (double) sumz / n;
        System.out.printf("%.6f\n", rp);
        System.out.printf("%.6f\n", rn);
        System.out.printf("%.6f\n", rz);
    }
}
