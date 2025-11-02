import java.util.*;

public class Main {
    static int N;
    static int[][] space;
    static int[] dx = {0, -1, 1, 0};
    static int[] dy = {1, 0, 0, -1};

    static int[] bfs(int sx, int sy, int size) {
        int[][] dist = new int[N][N];

        for (int i = 0; i < N; i++) {
            Arrays.fill(dist[i], -1);
        }

        Queue<int[]> q = new ArrayDeque<>(); // 큐 선언
        q.add(new int[]{sx, sy}); // 시작 위치 큐에 추가
        dist[sx][sy] = 0; // 시작 위치 거리 0으로 설정

        List<int[]> candidates = new ArrayList<>(); // 먹을 수 있는 물고기 후보 리스트
        int foundDist = Integer.MAX_VALUE; // 발견된 최소 거리 초기화

        while (!q.isEmpty()) {
            int[] cur = q.poll(); // 큐에서 현재 위치 꺼내기
            int cx = cur[0], cy = cur[1]; // 현재 x, y 좌표
            int cd = dist[cx][cy]; // 현재 거리

            if(cd > foundDist) continue; // 이미 더 가까운 물고기 찾았으면 더 깊게 탐색하지 않음

            for(int k = 0; k < 4; k++){
                int nx = cx + dx[k];
                int ny = cy + dy[k];

                if(nx < 0 || nx >= N || ny < 0 || ny >= N) continue; // 경계 검사
                if(dist[nx][ny] != -1) continue; // 이미 방문한 곳이면 건너뜀
                if(space[nx][ny] > size) continue; // 지나갈 수 없음

                dist[nx][ny] = cd + 1; // 거리 갱신

                if(space[nx][ny] != 0 && space[nx][ny] < size) {
                    // 먹을 수 있는 물고기
                    foundDist = dist[nx][ny];
                    candidates.add(new int[]{nx, ny, foundDist});
                }

                // 물고기를 찾았더라도 같은 거리는 계속 볼 수 있어야 함
                if(dist[nx][ny] <= foundDist) q.add(new int[]{nx, ny});
            }
        }

        if(candidates.isEmpty()) return null;

        // 행 우선, 열 차순 정렬
        candidates.sort((a, b) -> {
            if (a[2] != b[2]) return a[2] - b[2];
            if (a[0] != b[0]) return a[0] - b[0];
            return a[1] - b[1];
        });

        return candidates.get(0);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        N = sc.nextInt();
        space = new int[N][N];

        int sx = 0, sy = 0;
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                space[i][j] = sc.nextInt();

                if(space[i][j] == 9){
                    sx = i;
                    sy = j;
                    space[i][j] = 0; // 시작 위치는 빈칸으로 처리
                }
            }
        }

        int size = 2;
        int eaten = 0;
        int time = 0;

        while(true){
            int[] fish = bfs(sx, sy, size);
            if(fish == null) break; // 먹을 수 있는 물고기 없음

            int fx = fish[0];
            int fy = fish[1];
            int dist = fish[2];

            time += dist; // 시간 증가
            sx = fx; // 상어 위치 갱신
            sy = fy;

            space[fx][fy] = 0; // 물고기 먹음
            eaten++;

            if(eaten == size){
                size++;
                eaten = 0;
            }
        }

        System.out.println(time);
    }
}
