import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        int m, w;
        Scanner sc = new Scanner(System.in);
        m = sc.nextInt();

        for(int i=0; i<9 ;i++) {
            w = sc.nextInt();
            m -= w;
        }
        System.out.println(m);

        }
    }
