#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int T, n, d, c;

const int INF = 1e9;

struct Edge{
    int to;
    int cost;
};

void dijk(int start, int n, vector<vector<Edge>>& adj){

    int cnt = 0;
    int res = 0;

    vector<int> dist(n + 1, INF);
    dist[start] = 0;

    priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int, int>>> pq; // 시간, 현재 엣지

    pq.push({0, start});

    while(!pq.empty()){
        int c = pq.top().first;
        int now = pq.top().second;
        pq.pop();

        if(dist[now] > c){
            continue;
        }

        for(auto &next: adj[now]){
            int cost = next.cost + c;

            if(cost < dist[next.to]){
                dist[next.to] = cost;
                pq.push({cost, next.to});

            }
        }
    }

    for (int i = 0; i < dist.size(); i++)
    {
        if(dist[i] < INF){
            cnt++;
            res = max(res, dist[i]);
        }
    }
    
    cout << cnt << ' ' << res << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> T;

    int a, b, s;

    while(T--){
        cin >> n >> d >> c;

        vector<vector<Edge>> adj(n + 1);

        for (int i = 0; i < d; i++)
        {
            cin >> a >> b >> s;

            adj[b].push_back({a,s});
        }

        dijk(c, n, adj);
    }



    return 0;
}
