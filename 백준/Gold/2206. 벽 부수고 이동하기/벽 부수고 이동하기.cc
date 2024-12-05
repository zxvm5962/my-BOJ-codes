#include <iostream>
#include <vector>
#include <queue>
#include <tuple>

using namespace std;

struct State
{
    int x, y;
    bool wall_broken;
    int distance;
};

// 상하좌우
int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};

queue<State> q;

bool visited[1000][1000][2];

int N, M;

int bfs(int N, int M, vector<vector<int>> &v)
{
    q.push(State{0, 0, 0, 1});
    visited[0][0][0] = true;

    while (!q.empty())
    {
        State cur = q.front();
        q.pop();

        // 도착지에 도달하면 거리 반환
        if (cur.x == N - 1 && cur.y == M - 1)
        {
            return cur.distance;
        }

        // 상하좌우 탐색
        for (int i = 0; i < 4; i++)
        {
            int nx = cur.x + dx[i];
            int ny = cur.y + dy[i];
            bool wall_broken = cur.wall_broken;

            // 맵 범위를 벗어나는 경우
            if (nx < 0 || ny < 0 || nx >= N || ny >= M)
            {
                continue;
            }

            // 벽을 부수지 않고 이동 가능한 경우
            if (v[nx][ny] == 0 && !visited[nx][ny][wall_broken])
            {
                visited[nx][ny][wall_broken] = true;
                q.push(State{nx, ny, wall_broken, cur.distance + 1});
            }

            // 벽을 부수고 이동하는 경우
            if (v[nx][ny] == 1 && !wall_broken && !visited[nx][ny][1])
            {
                visited[nx][ny][1] = true;
                q.push(State{nx, ny, true, cur.distance + 1});
            }
        }
    }

    // 도달할 수 없는 경우
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;

    cin >> N >> M;
    vector<vector<int>> v(N, vector<int>(M));
    for (int i = 0; i < N; i++)
    {
        cin >> str;
        for (int j = 0; j < M; j++)
        {
            v[i][j] = str[j] - '0';
        }
    }

    cout << bfs(N, M, v);

    return 0;
}
