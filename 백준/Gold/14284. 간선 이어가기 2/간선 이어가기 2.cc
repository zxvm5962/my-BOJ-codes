#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int N, M;

using pii = pair<int, int>;

const int INF = 1e9;

struct Edge{
    int to;
    int cost;
};



void dijk(int start, int end, int n, vector<vector<Edge>> &adj){
    vector<int> dist(n+1, INF);
    priority_queue<pii, vector<pii>, greater<pii>> pq;

    dist[start] = 0;
    pq.push({0, start});

    while(!pq.empty()){
        int c = pq.top().first;
        int now = pq.top().second;
        pq.pop();

        if(dist[now] > c) continue;

        for (auto next: adj[now])
        {
            int cost = next.cost + c; // 다음 경로 가중치 합

            if(cost < dist[next.to]){ // 이 길을 선택하는게 나으면
                dist[next.to] = cost;
                pq.push({cost, next.to});
            }
        }
    }
    cout << dist[end];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    int a, b, c, s, t;
    vector<vector<Edge>> adj(N+1);
    
    for (int i = 0; i < M; i++)
    {
        cin >> a >> b >> c;

        adj[a].push_back({b,c});
        adj[b].push_back({a,c});
    }
    cin >> s >> t;

    dijk(s, t, N, adj);
    

    return 0;
}
