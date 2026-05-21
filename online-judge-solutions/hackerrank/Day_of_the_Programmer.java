import java.util.Scanner;

public class Day_of_the_Programmer {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        if (n == 1918) System.out.println("26.09.1918");
        else if (((n <= 1917) && (n % 4 == 0)) || ((n % 400 == 0) || ((n % 4 == 0) && (n % 100 != 0))))
            System.out.println("12.09." + n);
        else System.out.println("13.09." + n);
    }
}