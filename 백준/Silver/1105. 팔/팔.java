import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    public static int cnt = 0;
    public static String num1, num2;

    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());


        num1 = st.nextToken();
        num2 = st.nextToken();

        if(num1.length() != num2.length()){
            System.out.println(0);
            return;
        }
        else{
            for (int i = 0; i <num1.length(); i++) {
                if(num1.charAt(i) == '8' && num1.charAt(i) == num2.charAt(i)){
                    cnt++;
                }
                else if(num1.charAt(i) == num2.charAt(i)){
                    continue;
                }
                else{
                    break;
                }

            }
        }
        System.out.println(cnt);

    }

}
