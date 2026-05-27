import java.util.Scanner;

public class _006_Loops {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int mul;
        for (int i = 1; i <= 10; i++) {
            mul = n * i;
            System.out.println(n + " x " + i + " = " + mul);
        }
    }
}
