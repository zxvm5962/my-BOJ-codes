#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <cstring>

using namespace std;

int N, M;

long long INF = 1e11;

using pii = pair<int, int>;

struct Edge
{
    int to;
    int cost;
};

int room[101];

void solve(int start, vector<vector<Edge>> &adj)
{
    vector<long long> dist(N + 1, INF);
    priority_queue<pii, vector<pii>, greater<pii>> pq;

    dist[start] = 0;
    pq.push({0, start});

    while (!pq.empty())
    {
        int cost = pq.top().first;
        int now = pq.top().second;
        pq.pop();

        if (dist[now] < cost)
            continue;

        for (auto next : adj[now])
        {
            int next_cost = cost + next.cost;

            if (next_cost < dist[next.to])
            {
                dist[next.to] = next_cost;
                pq.push({next_cost, next.to});
            }
        }
    }

    for (int i = 1; i <= N; i++)
    {
        room[i] += dist[i];
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    while (T--)
    {
        cin >> N >> M;

        memset(room, 0, sizeof(room));

        int a, b, c;

        vector<vector<Edge>> adj(N + 1);

        for (int i = 0; i < M; i++)
        {
            cin >> a >> b >> c;

            adj[a].push_back({b, c});
            adj[b].push_back({a, c});
        }

        int K;
        vector<int> friends(0);
        cin >> K;
        int f;
        for (int i = 0; i < K; i++)
        {
            cin >> f;
            friends.push_back(f);
        }

        for (int i = 0; i < K; i++)
        {
            solve(friends[i], adj);
        }

        long long minV = INF;
        int ans = 0;

        for (int i = 1; i < N + 1; i++)
        {
            if (room[i] < minV)
            {
                minV = room[i];
                ans = i;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
