#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int N, M;

const long long INF = 1e11;

using pli = pair<long long, int>;

bool visibility[100001];

struct Edge
{
    int to;
    int cost;
};

void dijk(int start, int N, vector<vector<Edge>> &adj)
{
    vector<long long> dist(N, INF);
    priority_queue<pli, vector<pli>, greater<pli>> pq; // 비용, 현재 엣지

    dist[start] = 0;
    pq.push({0, start});

    while (!pq.empty())
    {
        long long cost = pq.top().first;
        int now = pq.top().second;
        pq.pop();

        if (dist[now] < cost)
            continue;

        for (auto a : adj[now])
        {
            if (cost + a.cost < dist[a.to])
            {
                dist[a.to] = cost + a.cost;
                pq.push({cost + a.cost, a.to});
            }
        }
    }

    if (dist[N - 1] == INF)
    {
        cout << -1;
    }
    else
        cout << dist[N - 1];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    int a, b, t;

    for (int i = 0; i < N - 1; i++)
    {
        cin >> a;

        visibility[i] = a;
    }

    cin >> a; // 넥서스는 상관없음-> 버림

    vector<vector<Edge>> adj(N);

    for (int i = 0; i < M; i++)
    {
        cin >> a >> b >> t;

        if (visibility[a] || visibility[b])
        {
            continue;
        }

        adj[a].push_back({b, t});
        adj[b].push_back({a, t});
    }

    dijk(0, N, adj);

    return 0;
}
