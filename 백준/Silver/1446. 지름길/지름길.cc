#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int N, D;

const int INF = 1e9;

using pii = pair<int, int>;

struct Edge
{
    int to;
    int cost;
};

void dijk(vector<vector<Edge>> &adj)
{
    vector<int> dist(D + 1, INF);

    priority_queue<pii, vector<pii>, greater<pii>> pq; // 비용, 현재 위치

    dist[0] = 0;

    pq.push({0, 0});

    while (!pq.empty())
    {
        pii cur = pq.top();
        pq.pop();

        if (cur.first > dist[cur.second])
            continue;

        for (auto next : adj[cur.second])
        {
            int cost = next.cost + cur.first;

            if (cost < dist[next.to])
            {
                dist[next.to] = cost;
                pq.push({cost, next.to});
            }
        }
    }

    cout << dist[D];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> D;

    vector<vector<Edge>> adj(D + 1);

    for (int i = 0; i < D; i++)
    {
        adj[i].push_back({i + 1, 1});
    }

    int a, b, c;
    for (int i = 0; i < N; i++)
    {
        cin >> a >> b >> c;

        if(b > D) continue;

        adj[a].push_back({b, c});
    }

    dijk(adj);

    return 0;
}
