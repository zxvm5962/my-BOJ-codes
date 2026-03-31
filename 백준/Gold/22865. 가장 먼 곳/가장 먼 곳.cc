#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int N, A, B, C, M;

const int INF = 1e9;

using pii = pair<int, int>;

struct Edge
{
    int to;
    int cost;
};

void dijk(int start, vector<vector<Edge>> &adj, vector<int> &min_dist)
{
    vector<int> dist(N + 1, INF);
    priority_queue<pii, vector<pii>, greater<pii>> pq;

    dist[start] = 0;
    pq.push({0, start});

    while(!pq.empty()){
        int c = pq.top().first;
        int now = pq.top().second;
        pq.pop();

        if(dist[now] < c) continue;

        for (auto next: adj[now])
        {
            int cost = next.cost + c;

            if(cost < dist[next.to]){
                dist[next.to] = cost;

                pq.push({cost, next.to});
            }
        }
    }

    for (int i = 1; i < N + 1; i++)
    {
        min_dist[i] = min(min_dist[i], dist[i]); //각 친구들의 거리 중에 최소 값을 저장함(비교용)
    }
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> A >> B >> C >> M;

    vector<vector<Edge>> adj(N + 1);
    int D, E, L;

    vector<int> min_dist(N + 1, INF);

    for (int i = 0; i < M; i++)
    {
        cin >> D >> E >> L;

        adj[D].push_back({E, L});
        adj[E].push_back({D, L});
    }

    dijk(A, adj, min_dist);
    dijk(B, adj, min_dist);
    dijk(C, adj, min_dist);

    int res = 0;
    int maxV = 0;

    for (int i = 1; i < N + 1; i++)
    {
        if(min_dist[i] != INF && maxV < min_dist[i]){
            maxV = min_dist[i];
            res = i;
        }
    }

    cout << res;
    
    return 0;
}
