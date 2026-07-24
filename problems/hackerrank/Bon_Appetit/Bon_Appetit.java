import java.util.Scanner;

public class Bon_Appetit {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int k = input.nextInt();
        int[] array = new int[n];
        int sum = 0;
        for (int i = 0; i < n; i++) {
            array[i] = input.nextInt();
            sum = sum + array[i];
        }
        int b = input.nextInt();
        int actual_bill = (sum - array[k]) / 2;
        int bill_difference = b - actual_bill;
        if ( actual_bill == b) System.out.println("Bon Appetit");
        else System.out.println(bill_difference);
    }
}
