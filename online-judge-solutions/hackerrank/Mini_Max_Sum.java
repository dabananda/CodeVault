import java.util.Scanner;

public class Mini_Max_Sum {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        long[] array = new long[5];
        long max, min, i, sum = 0;
        for (i = 0; i < 5; i++) {
            array[(int) i] = input.nextInt();
            sum = sum + array[(int) i];
        }
        max = array[0];
        min = array[0];
        for (i = 0; i < array.length; i++) {
            if (array[(int) i] > max) max = array[(int) i];
            if (array[(int) i] < min) min = array[(int) i];
        }
        long r1 = sum - max;
        long r2 = sum - min;
        System.out.println(r1 + " " + r2);
    }
}
