import java.util.Scanner;

public class Cats_and_a_Mouse {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int q = input.nextInt();
        int i, x, y, z;
        for (i = 1; i <= q; i++) {
            x = input.nextInt();
            y = input.nextInt();
            z = input.nextInt();
            if (Math.abs(z - x) > Math.abs(z - y)) System.out.println("Cat B");
            else if (Math.abs(z - x) < Math.abs(z - y)) System.out.println("Cat A");
            else System.out.println("Mouse C");
        }
    }
}
