import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int h, a;
        Scanner sc = new Scanner(System.in);
        h = sc.nextInt();
        a = sc.nextInt();
        boolean flag = true;

        if(h>= 12 && h <= 16){
            flag = false;
        }

        if (a == 1){
            flag = true;
        }

        if (flag == true){
            System.out.println(280);
        }
        else{
            System.out.println(320);
        }

        }
    }
