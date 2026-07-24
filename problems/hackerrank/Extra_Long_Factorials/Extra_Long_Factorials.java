import java.math.BigInteger;
import java.util.Scanner;

public class Extra_Long_Factorials {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        BigInteger factorial = new BigInteger("1");
        for (int i = n; i >= 1; i--) {
            BigInteger multi = new BigInteger(String.valueOf(i));
            factorial = factorial.multiply(multi);
        }
        System.out.println(factorial);
    }
}
