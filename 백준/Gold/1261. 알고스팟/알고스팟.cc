#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int M, N;

bool visited[101][101]; // x, y
int wall[101][101];

struct State
{
    int x, y;
    int broken_count; // 벽 부순 수
};

void solve(vector<vector<int>> &graph)
{
    int dx[4] = {0, 0, 1, -1};
    int dy[4] = {1, -1, 0, 0};

    queue<State> q;

    q.push({0, 0, 0});

    int min_broken = 1e9;

    while (!q.empty())
    {
        auto cur = q.front();
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int nx = cur.x + dx[i];
            int ny = cur.y + dy[i];
            int ncount = cur.broken_count;

            if (nx < 0 || nx >= N || ny < 0 || ny >= M)
                continue;

            if (graph[nx][ny] == 1 && wall[nx][ny] > ncount + 1)
            {
                wall[nx][ny] = ncount + 1;
                q.push({nx, ny, ncount + 1});
            }

            if (graph[nx][ny] == 0 && wall[nx][ny] > ncount)
            {
                wall[nx][ny] = ncount;
                q.push({nx, ny, ncount});
            }

            if (visited[nx][ny])
                continue;

            if (graph[nx][ny] == 0)
            {
                visited[nx][ny] = true;
                wall[nx][ny] = ncount;
                q.push({nx, ny, ncount});
            }

            if (graph[nx][ny] == 1)
            {
                visited[nx][ny] = true;
                wall[nx][ny] = ncount + 1;
                q.push({nx, ny, ncount + 1});
            }
        }
    }

    cout << wall[N - 1][M - 1];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> M >> N;

    vector<vector<int>> graph(N + 1);

    char a;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> a;

            graph[i].push_back(a - '0');
        }
    }

    solve(graph);

    return 0;
}
