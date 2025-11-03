import java.util.ArrayList;
import java.util.List;
import java.util.PriorityQueue;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        PriorityQueue<Integer> pq = new PriorityQueue<>();
        List<int[]> meetings = new ArrayList<>();

        for (int i = 0; i < N; i++){
            int start = sc.nextInt();
            int end = sc.nextInt();

            meetings.add(new int[]{start, end});
        }

        meetings.sort((a, b) -> Integer.compare(a[0], b[0]));
        int minRooms = 0;

        for (int i = 0; i < N; i++){
            int start = meetings.get(i)[0];
            int end = meetings.get(i)[1];

            if (!pq.isEmpty() && pq.peek() <= start) {
                pq.poll();
            }

            pq.add(end);

            minRooms = Math.max(minRooms, pq.size());
        }

        System.out.println(minRooms);
    }
}
