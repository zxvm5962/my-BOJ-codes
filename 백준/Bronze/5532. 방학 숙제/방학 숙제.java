import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int l, a, b, c, d, ko, ma;
        Scanner sc = new Scanner(System.in);
        l = sc.nextInt();
        a = sc.nextInt();
        b = sc.nextInt();
        c = sc.nextInt();
        d = sc.nextInt();

        if (a % c == 0)
            ko = a/c;
        else
            ko = a/c + 1;
        if (b % d == 0)
            ma = b/d;
        else
            ma = b/d + 1;

        if(ko >= ma)
            System.out.println(l - ko);
        else
            System.out.println(l - ma);


        }
    }
