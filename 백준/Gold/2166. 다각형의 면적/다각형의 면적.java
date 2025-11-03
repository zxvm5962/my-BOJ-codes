import java.util.*;

public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        double result = 0.0;
        int N = sc.nextInt();

        List<Long[]> points = new ArrayList<>();

        for (long i = 0; i < N; i++) {
            long x = sc.nextLong();
            long y = sc.nextLong();

            points.add(new Long[]{x, y});
        }

        for(int i = 0; i < N - 1; i++){
            long x1 = points.get(i)[0];
            long y1 = points.get(i)[1];
            long x2 = points.get(i + 1)[0];
            long y2 = points.get(i + 1)[1];

            result += (x1 * y2) - (y1 * x2);
        }

        result += points.get(N - 1)[0] * points.get(0)[1] - points.get(N - 1)[1] * points.get(0)[0];

        result = Math.abs(result) / 2.0;

        result = (double) Math.round(result * 10) / 10;

        System.out.printf("%.1f%n", result);
    }
}
