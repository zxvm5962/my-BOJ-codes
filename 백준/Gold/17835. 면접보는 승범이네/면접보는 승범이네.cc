#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

const long long INF = 1e11;
int N, M, K;
using pii = pair<long long, int>;

long long maxV = 0, res = 1;

struct Edge
{
    int to;
    int cost;
};

vector<int> target;

void dijk(vector<vector<Edge>> &adj)
{
    vector<long long> dist(N + 1, INF);
    priority_queue<pii, vector<pii>, greater<pii>> pq; // cost, now

    for (int i = 0; i < target.size(); i++)
    {
        dist[target[i]] = 0;
        pq.push({0, target[i]});
    }
    
    while (!pq.empty())
    {
        long long c = pq.top().first;
        int now = pq.top().second;
        pq.pop();

        if (c > dist[now])
            continue;

        for (auto next : adj[now])
        {
            long long cost = next.cost + c;

            if (dist[next.to] > cost)
            {
                dist[next.to] = cost;
                pq.push({cost, next.to});
            }
        }
    }

    for (int i = 1; i <= N ; i++)
    {
        if(dist[i] > maxV){
            maxV = dist[i];
            res = i;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M >> K;

    vector<vector<Edge>> adj(N + 1);

    int U, V, C;

    for (int i = 0; i < M; i++)
    {
        cin >> U >> V >> C;

        adj[V].push_back({U, C});
    }

    int a;

    for (int i = 0; i < K; i++)
    {
        cin >> a;

        target.push_back(a);
    }

    dijk(adj);

    cout << res << "\n" << maxV;

    return 0;
}
