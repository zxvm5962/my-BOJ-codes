#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <cstring>
#include <climits> // INT_MAX 사용을 위해

using namespace std;

const int MAX = 801;                  // 최대 노드 수
vector<vector<pair<int, int>>> graph; // 인접 리스트 (노드, 가중치)
vector<int> dist;

// 다익스트라 알고리즘
void dijkstra(int start)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    // {현재 노드까지의 거리, 현재 노드}를 저장하는 우선순위 큐 (최소 힙)

    // 시작 노드 초기화
    dist[start] = 0;
    pq.push({0, start});

    while (!pq.empty())
    {
        int current_dist = pq.top().first;  // 현재 노드까지의 거리
        int current_node = pq.top().second; // 현재 노드
        pq.pop();

        // 이미 처리된 노드면 건너뛰기
        if (current_dist > dist[current_node])
        {
            continue;
        }

        // 현재 노드의 인접 노드들에 대해 탐색
        for (auto edge : graph[current_node])
        {
            int next_node = edge.first;
            int weight = edge.second;

            // 현재 노드를 거쳐서 가는 거리가 더 짧으면 갱신
            if (dist[next_node] > current_dist + weight)
            {
                dist[next_node] = current_dist + weight;
                pq.push({dist[next_node], next_node});
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, v1, v2;
    cin >> n >> m;
    dist.assign(n + 1, INT_MAX);
    graph.assign(n + 1, vector<pair<int, int>>());

    // 간선 입력
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
        graph[v].push_back({u, w});
    }

    long long a, b, c, d;
    cin >> v1 >> v2;
    dijkstra(1);
    a = dist[v1];
    b = dist[v2];
    fill(dist.begin(), dist.end(), INT_MAX);
    dijkstra(v1);
    a += dist[v2];
    c = dist[n];
    fill(dist.begin(), dist.end(), INT_MAX);
    dijkstra(v2);
    b += dist[v1];
    b += c;
    a += dist[n];
    if (min(a, b) > 1e9)
        cout << -1;
    else
        cout << min(a, b);

    return 0;
}
