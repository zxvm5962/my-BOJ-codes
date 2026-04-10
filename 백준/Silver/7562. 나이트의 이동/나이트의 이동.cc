#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int N, I;

int dx[8] = {2, 2, 1, 1, -2, -2, -1, -1};
int dy[8] = {1, -1, 2, -2, 1, -1, 2, -2};

int bfs(int sx, int sy, int ex, int ey, vector<vector<int>> &v)
{
    int dist[301][301] = {0};
    queue<pair<int, int>> q;

    dist[sx][sy] = 0;
    q.push({sx, sy});

    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        if (x == ex && y == ey)
        {
            break;
        }

        for (int i = 0; i < 8; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || nx >= I || ny < 0 || ny >= I)
                continue;

            if (dist[nx][ny] > 0)
                continue;

            dist[nx][ny] = dist[x][y] + 1;

            q.push({nx, ny});
        }
    }

    return dist[ex][ey];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    int sx, sy, ex, ey;

    while (N--)
    {
        cin >> I;

        vector<vector<int>> v(I, vector<int>(I, 0));
        cin >> sx >> sy >> ex >> ey;

        cout << bfs(sx, sy, ex, ey, v) << "\n";
    }

    return 0;
}
