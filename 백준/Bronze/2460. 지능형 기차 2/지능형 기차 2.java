import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        int m , w, max = 0, sum = 0;
        Scanner sc = new Scanner(System.in);
        for(int i=0; i<10 ;i++) {
            m = sc.nextInt();
            w = sc.nextInt();
            sum -= m;
            sum += w;
            if (max < sum)
                max = sum;

        }
        System.out.println(max);

        }
    }
