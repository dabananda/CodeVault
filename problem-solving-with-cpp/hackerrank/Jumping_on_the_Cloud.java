import java.util.Scanner;

public class Jumping_on_the_Cloud { // Problem name: Jumping on the Clouds: Revisited
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int k = input.nextInt();
        int[] clouds = new int[n];
        for (int i = 0; i < n; i++) clouds[i] = input.nextInt();
        int energy = 100, CurrentClouds = 0;
        do {
            CurrentClouds = ((CurrentClouds + k) % n);
            energy--;
            if (clouds[CurrentClouds] == 1) {
                energy = energy - 2;
            }
        } while (CurrentClouds % n != 0);
        System.out.println(energy);
    }
}