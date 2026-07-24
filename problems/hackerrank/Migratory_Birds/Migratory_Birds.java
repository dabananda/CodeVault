import java.util.Scanner;

public class Migratory_Birds {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] array = new int[n];
        for (int i = 0; i < 5; i++) {
            int type = input.nextInt() - 1;
            array[type] = array[type] + 1;
        }
        int max = 0, index = 0;
        for (int i = 0; i < 5; i++) {
            if (array[i] > max) {
                max = array[i];
                index = i;
            }
        }
        System.out.println(index + 1);
    }
}
