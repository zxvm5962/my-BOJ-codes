import java.util.*;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        int K = sc.nextInt();

        List<int[]> jewels = new ArrayList<>();
        List<Integer> bags = new ArrayList<>();

        for (int i = 0; i < N; i++) {
            int weight = sc.nextInt();
            int value = sc.nextInt();

            jewels.add(new int[]{weight, value});
        }

        for (int i = 0; i < K; i++){
            int c = sc.nextInt();
            bags.add(c);
        }

        Collections.sort(bags);

        jewels.sort((a,b) -> {
            if(a[0] != b[0]){
                return a[0] - b[0];
            } else {
                return b[1] - a[1];
            }
        });

        PriorityQueue<Integer> pq = new PriorityQueue<>(Collections.reverseOrder());

        long result = 0;

        int idx = 0;
        for(int i = 0; i < K; i++){
            int capacity = bags.get(i);

            while(idx < N && jewels.get(idx)[0] <= capacity){
                pq.add(jewels.get(idx)[1]);
                idx++;
            }

            if(!pq.isEmpty()){
                result += pq.poll();
            }
        }

        System.out.println(result);
    }
}
