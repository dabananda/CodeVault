import java.util.Scanner;

public class Counting_Valleys {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        input.nextLine();
        int counter = 0, total = 0;
        String valleys = input.nextLine();
        Character c1 = 'U', c2 = 'D';
        for (int i = 0; i < valleys.length(); i++) {
            char c = valleys.charAt(i);
            if (c1.equals(c)) counter++;
            else if (c2.equals(c)) {
                counter--;
                if (counter == -1) total++;
            }
        }
        System.out.print(total);
    }
}