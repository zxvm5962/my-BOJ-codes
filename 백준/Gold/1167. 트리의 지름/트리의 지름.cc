#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

const int MAX = 100001;           // 노드의 최대 개수
vector<pair<int, int>> tree[MAX]; // 인접 리스트 (노드, 거리)
bool visited[MAX];                // 방문 여부 체크 배열
int max_dist;                     // 최대 거리
int max_node;                     // 가장 멀리 있는 노드

// DFS 함수: 현재 노드에서 깊이 우선 탐색
void dfs(int node, int dist)
{
    visited[node] = true; // 현재 노드를 방문 처리

    // 지금까지의 최대 거리보다 현재 거리가 크면 갱신
    if (dist > max_dist)
    {
        max_dist = dist;
        max_node = node;
    }

    // 인접한 노드들에 대해 DFS 재귀 호출
    for (auto next : tree[node])
    {
        int next_node = next.first;
        int next_dist = next.second;

        if (!visited[next_node])
        { // 아직 방문하지 않은 노드만 탐색
            dfs(next_node, dist + next_dist);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int u;
        cin >> u;

        while (1)
        {
            int v, w;
            cin >> v; // 연결된 노드 번호 입력
            if (v == -1)
                break; // -1이 나오면 입력 종료
            cin >> w;  // 그 노드까지의 거리 입력
            tree[u].push_back({v, w});
            tree[v].push_back({u, w});
        }
    }

    max_dist = 0;
    dfs(1, 0);
    memset(visited, false, sizeof(visited));
    max_dist = 0;
    dfs(max_node, 0); // 가장 먼 노드에서 다시 시작

    cout << max_dist;

    return 0;
}
