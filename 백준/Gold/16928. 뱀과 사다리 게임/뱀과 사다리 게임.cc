#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int N, M, res;

vector<int> graph(101, 0);

bool visited[101];
int dist[101];

int dice[6] = {1, 2, 3, 4, 5, 6};

void bfs()
{

    queue<int> q;
    q.push(1);
    visited[1] = true;

    while (!q.empty())
    {
        int x = q.front();
        q.pop();

        if (x == 100)
        {
            res = dist[x];
            return;
        }

        for (int i = 5; i >= 0; i--)
        {
            int nx = x + dice[i];

            if (nx > 100)
                continue;

            if (graph[nx] != 0)
            {
                nx = graph[nx];
            }

            if (visited[nx])
                continue;

            q.push(nx);
            dist[nx] = dist[x] + 1;
            visited[nx] = true;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    int u, v;

    for (int i = 0; i < N + M; i++)
    {
        cin >> u >> v;

        graph[u] = v;
    }

    bfs();

    cout << res;

    return 0;
}
