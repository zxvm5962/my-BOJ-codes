import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int m = 0,w = 0;
        Scanner sc = new Scanner(System.in);
        while(true) {
            m = sc.nextInt();
            w = sc.nextInt();
            if (m==0 && w == 0)
                break;
            else
                System.out.println(m + w);
        }

        }
    }
