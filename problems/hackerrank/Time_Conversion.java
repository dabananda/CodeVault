
// Have to understand the code

import java.util.Scanner;

public class Time_Conversion {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String time = in.next();
        String[] listTime = time.split(":");
        String hour = listTime[0];
        String minutes = listTime[1];
        String seconds = listTime[2].substring(0, 2);
        String caser = listTime[2].substring(2, 4);
        if (caser.equals("AM")) {
            if (hour.equals("12"))
                hour = "00";
            System.out.println(hour + ":" + minutes + ":" + seconds);
        } else {
            if (!hour.equals("12")) {
                int h = Integer.parseInt(hour);
                h = h + 12;
                hour = "" + h;
            }
            System.out.println(hour + ":" + minutes + ":" + seconds);
        }
    }
}