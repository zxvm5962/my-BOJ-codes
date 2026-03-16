#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int N, M, A, B, C;
const int INF = 1e9;
using pii = pair<int, int>;

struct Edge{
    int to;
    int cost;
};

void dijk(int start, int n, vector<vector<Edge>> &adj){
    vector<int> dist(n + 1, INF);

    priority_queue<pii, vector<pii>, greater<pii>> pq; // 비용, 현재 엣지

    dist[start] = 0;
    pq.push({0, start});

    while (!pq.empty())
    {
        int c = pq.top().first;
        int now = pq.top().second;
        pq.pop();

        if(dist[now] < c) continue;

        for (auto next: adj[now])
        {
            int cost = c + next.cost;
            if(cost < dist[next.to]){
                dist[next.to] = cost;
                pq.push({cost, next.to});
            }
        }
    }
    
    cout << dist[n];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    vector<vector<Edge>> adj(N + 1);

    for (int i = 0; i < M; i++)
    {
        cin >> A >> B >> C;

        adj[A].push_back({B,C});
        adj[B].push_back({A,C});
    }

    dijk(1, N, adj);
    


    return 0;
}
