import java.util.Scanner;

public class Compare_the_Triplets {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int i, point1 = 0, point2 = 0;
        int[] array1 = new int[3];
        int[] array2 = new int[3];
        for (i = 0; i < 3; i++) {
            array1[i] = input.nextInt();
        }
        for (i = 0; i < 3; i++) {
            array2[i] = input.nextInt();
        }
        for (i = 0; i < 3; i++) {
            if (array1[i] > array2[i]) point1++;
            else if (array1[i] < array2[i]) point2++;
        }
        System.out.println(point1 + " " + point2);
    }
}
