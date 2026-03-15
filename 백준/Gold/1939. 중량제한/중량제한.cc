#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int N, M, A, B, C, s, d;

const int INF = 1e9 + 1;

struct Edge
{
    int to; // 목적지
    int cost; // 가중치
};

void dijk(int start, vector<vector<Edge>> &adj, int d){

    vector<int> dist(N + 1, 0);

    priority_queue<pair<int, int>> pq; // 비용, 현재노드

    dist[start] = INF;
    pq.push({INF, start}); // 중량 INF 에다가 지금 노드 번호

    while(!pq.empty()){
        int c = pq.top().first;
        int now = pq.top().second;
        pq.pop();

        // 1. 이미 처리된 노드라면 스킵
        if (dist[now] > c)
            continue;

        // 2. 인접 노드 확인
        for (auto &edge : adj[now])
        {
            int cost = min(c, edge.cost); // 지금 가중치, 인접 가중치

            // 3. 중량이 큰 경로를 찾았다면 갱신
            if (cost > dist[edge.to])
            {
                dist[edge.to] = cost;
                pq.push({cost, edge.to});
            }
        }
    }

    cout << dist[d];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    vector<vector<Edge>> adj(N+1);

    for (int i = 0; i < M; i++)
    {
        cin >> A >> B >> C;

        adj[A].push_back({B, C});
        adj[B].push_back({A, C}); // 양방향
    }
    
    cin >> s >> d;

    dijk(s, adj, d);


    return 0;
}
