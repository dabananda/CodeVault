import java.util.Scanner;

public class IfElse {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int N = input.nextInt();
        if (N % 2 != 0) System.out.println("Weird");
        else if (N >= 2 && N <= 5) {
            if (N % 2 == 0) System.out.println("Not Weird");
        }
        else if (N >= 6 && N <= 20) {
            if (N % 2 == 0) System.out.println("Weird");
        }
        else if (N > 20) {
            if (N % 2 == 0) System.out.println("Not Weird");
        }
    }
}
