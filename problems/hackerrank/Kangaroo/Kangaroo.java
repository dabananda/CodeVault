import java.util.Scanner;

public class Kangaroo {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int x1 = input.nextInt();
        int v1 = input.nextInt();
        int x2 = input.nextInt();
        int v2 = input.nextInt();
        if (x2 > x1 && v2 > v1) System.out.println("NO");
        else if (v1 == v2) System.out.println("NO");
        else {
            if ((x1 - x2) % (v2 - v1) == 0) System.out.println("YES");
            else System.out.println("NO");
        }
    }
}