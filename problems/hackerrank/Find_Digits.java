import java.util.Scanner;

public class Find_Digits {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        for (int i = 1; i <= n; i++) {
            int number = input.nextInt();
            int temp = number;
            int rest, count = 0;
            while (temp != 0) {
                rest = temp % 10;
                if (rest != 0 && number % rest == 0) count++;
                temp = temp / 10;
            }
            System.out.println(count);
        }
    }
}
