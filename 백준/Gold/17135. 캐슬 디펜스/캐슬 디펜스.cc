#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int N, M, D;

vector<vector<int>> graph;

struct Edge
{
    int x;
    int y;
};

bool wall[15];

int res = 0;

void moveGraph(vector<vector<int>> &g)
{
    vector<vector<int>> tmp(N + 1, vector<int>(M, 0));

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (g[i][j] == 1)
            {
                if (i == N - 1)
                {
                    continue;
                }
                else
                {
                    tmp[i + 1][j] = 1;
                }
            }
        }
    }

    g = tmp;
}

void solve()
{
    int cnt = 0;

    int dx[3] = {0, -1, 0};
    int dy[3] = {-1, 0, 1};

    queue<Edge> q;
    vector<vector<int>> g = graph; // 원본 그래프 복사

    vector<int> archers;

    for (int i = 0; i < 15; i++)
    {
        if (wall[i])
        {
            archers.push_back(i);
        }
    }

    int turn = N;

    while (turn--) // 행만큼 턴 진행
    {
        vector<pair<int, int>> target;

        for (int i = 0; i < 3; i++) // 아처 하나씩
        {
            q.push({N, archers[i]});
            bool visited[16][16] = {0};
            pair<int, int> best_target = {-1, -1};
            int min_dist = D + 1;

            while (!q.empty())
            {
                int x = q.front().x;
                int y = q.front().y;

                q.pop();

                for (int j = 0; j < 3; j++)
                {
                    int nx = x + dx[j];
                    int ny = y + dy[j];

                    if (nx < 0 || nx >= N || ny < 0 || ny >= M)
                    {
                        continue;
                    }

                    if (visited[nx][ny])
                        continue;

                    int nd = abs(N - nx) + abs(archers[i] - ny);

                    if (nd > D)
                        continue;

                    visited[nx][ny] = true;

                    if (g[nx][ny] == 1)
                    {
                        if (nd < min_dist)
                        {
                            min_dist = nd;
                            best_target = {nx, ny};
                        }
                    }

                    q.push({nx, ny});
                }
            }
            if (best_target.first != -1)
                target.push_back(best_target);
        }

        for (auto cur : target)
        {
            if (g[cur.first][cur.second] == 1)
            {
                g[cur.first][cur.second] = 0;
                cnt++;
            }
        }

        moveGraph(g); // 표적 격자 이동
    }

    res = max(res, cnt);
}

void select(int idx, int cnt)
{ // 궁수 위치 선택
    if (cnt == 3)
    {
        solve();

        return;
    }

    for (int i = idx; i < M; i++)
    {
        wall[i] = true;
        select(i + 1, cnt + 1);
        wall[i] = false;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M >> D;

    graph.resize(N + 1);

    int a;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> a;

            graph[i].push_back(a);
        }
    }

    select(0, 0);

    cout << res;
    
    return 0;
}
