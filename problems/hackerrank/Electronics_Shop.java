import java.util.Scanner;

public class Electronics_Shop {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int balance = input.nextInt();
        int m = input.nextInt();
        int n = input.nextInt();
        int[] keyboard = new int[m];
        int[] usb = new int[n];
        for (int i = 0; i < m; i++) keyboard[i] = input.nextInt();
        for (int i = 0; i < n; i++) usb[i] = input.nextInt();
        int maximum = -1;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (keyboard[i] + usb[j] <= balance) {
                    if (keyboard[i] + usb[j] >= maximum) maximum = keyboard[i] + usb[j];
                }
            }
        }
        System.out.println(maximum);
    }
}
