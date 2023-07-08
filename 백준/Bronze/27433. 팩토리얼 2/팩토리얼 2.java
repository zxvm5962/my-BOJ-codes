import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        long n;
        Scanner sc = new Scanner(System.in);
        n = sc.nextLong();

        long value = 1;

        for(long i=1; i<= n; i++) {
            value = value * i;
        }

        System.out.println(value);
        }
    }
