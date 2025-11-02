import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int[] alpha = new int[26];
        String str = sc.nextLine();
        String upper = sc.nextLine();

        for (int i =0; i< upper.length(); i++) {
            char ch = upper.charAt(i);

            if(ch >= 'A' && ch <= 'Z') {
                alpha[ch-'A'] = 1;
            }
        }

        String result = str;
        for(int i = 0; i < 26; i++) {
            for(int j = 0; j< str.length(); j++) {
                if(alpha[i] == 1 && str.charAt(j) == (char) (i + 'A')) {
                    result = str.replace((char) (i + 'A'), (char) (i + 'a'));
                    str = result;
                }
            }
        }

        System.out.println(result);
    }
}
