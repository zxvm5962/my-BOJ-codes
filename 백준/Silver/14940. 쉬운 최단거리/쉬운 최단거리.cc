#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int N, M;

int x, y;

void bfs(vector<vector<int>> &v)
{
    queue<pair<int, int>> q;
    vector<vector<int>> dist(N, vector<int>(M, -1));
    bool visited[1001][1001] = {0};

    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    q.push({x, y});
    visited[x][y] = true;
    dist[x][y] = 0;

    while (!q.empty())
    {
        auto cur = q.front();
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];

            if (nx < 0 || nx >= N || ny < 0 || ny >= M)
                continue;
            if (v[nx][ny] == 0)
            {
                continue;
            }

            if (visited[nx][ny])
                continue;

            dist[nx][ny] = dist[cur.first][cur.second] + 1;
            visited[nx][ny] = true;

            q.push({nx, ny});
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (v[i][j] == 0)
            {
                cout << 0 << ' ';
            }
            else
                cout << dist[i][j] << ' ';
        }
        cout << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    int a;

    vector<vector<int>> v(N);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> a;

            if (a == 2)
            {
                x = i;
                y = j;
            }

            v[i].push_back(a);
        }
    }

    bfs(v);

    return 0;
}
