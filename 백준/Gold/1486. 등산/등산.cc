#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <cmath>

using namespace std;

using pii = pair<int, int>;

const int INF = 1e7;

int N, M, T, D;

struct Edge
{
    int to;
    int cost;
};

int dijk(int start, int end, vector<vector<Edge>> &adj)
{
    vector<int> dist(1000, INF);
    priority_queue<pii, vector<pii>, greater<pii>> pq;

    dist[start] = 0;
    pq.push({0, start});

    while (!pq.empty())
    {
        int c = pq.top().first;
        int now = pq.top().second;
        pq.pop();

        if (c > dist[now])
            continue;

        for (auto next : adj[now])
        {
            int cost = next.cost + c;

            if (cost < dist[next.to])
            {
                dist[next.to] = cost;
                pq.push({cost, next.to});
            }
        }
    }

    return dist[end];
}

void make_graph(vector<vector<int>> &mt, vector<vector<Edge>> &adj)
{
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                int nx = i + dx[k];
                int ny = j + dy[k];

                if (nx < 0 || nx >= N || ny < 0 || ny >= M)
                    continue;

                int diff = abs(mt[i][j] - mt[nx][ny]);

                if (diff > T)
                    continue;

                int cost = diff * diff;

                if (mt[i][j] < mt[nx][ny])
                {
                    adj[i * M + j].push_back({nx * M + ny, cost});
                }
                else
                {
                    adj[i * M + j].push_back({nx * M + ny, 1});
                }
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M >> T >> D;

    vector<vector<int>> mt(N + 1);
    vector<vector<Edge>> adj(1000);

    string a;

    for (int i = 0; i < N; i++)
    {
        cin >> a;

        for (int j = 0; j < M; j++)
        {
            if (a[j] >= 'A' && a[j] <= 'Z')
            {
                mt[i].push_back(a[j] - 'A');
            }
            else
            {
                mt[i].push_back(a[j] - 'a' + 26);
            }
        }
    }

    make_graph(mt, adj);

    int max_height = mt[0][0];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            int time = dijk(0, M * i + j, adj) + dijk(M * i + j, 0, adj);

            if (time <= D)
            {
                if (max_height < mt[i][j])
                {
                    max_height = mt[i][j];
                }
            }
        }
    }

    cout << max_height;

    return 0;
}
