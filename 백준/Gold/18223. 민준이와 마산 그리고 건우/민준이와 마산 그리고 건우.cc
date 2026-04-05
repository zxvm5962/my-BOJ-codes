#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int V, E, P;

const int INF = 1e9;

using pii = pair<int, int>;

struct Edge
{
    int to;
    int cost;
};

int dijk(int start, int end, vector<vector<Edge>> &adj)
{
    vector<int> dist(V + 1, INF);
    priority_queue<pii, vector<pii>, greater<pii>> pq;

    dist[start] = 0;
    pq.push({0, start});

    while (!pq.empty())
    {
        pii cur = pq.top();
        pq.pop();

        if(cur.first > dist[cur.second]) continue;

        for (auto next: adj[cur.second])
        {
            int cost = dist[cur.second] + next.cost;

            if(cost < dist[next.to]){
                dist[next.to] = cost;
                pq.push({cost, next.to});
            }
        }
    }

    return dist[end];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> V >> E >> P;

    int a, b, c;

    vector<vector<Edge>> adj(V + 1);

    for (int i = 0; i < E; i++)
    {
        cin >> a >> b >> c;

        adj[a].push_back({b, c});
        adj[b].push_back({a, c});
    }

    int short_path = dijk(1, V, adj);
    int p = dijk(P, 1, adj) + dijk(P, V, adj);

    if(p == short_path){
        cout << "SAVE HIM";
    }
    else{
        cout << "GOOD BYE";
    }


    return 0;
}
