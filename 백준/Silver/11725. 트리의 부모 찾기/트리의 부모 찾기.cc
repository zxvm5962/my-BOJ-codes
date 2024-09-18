#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

const int MAX = 100001;
vector<int> tree[MAX]; // 인접 리스트 (노드, 거리)
bool visited[MAX];     // 방문 여부 체크 배열
int max_node;
int parent[MAX];

// DFS 함수: 현재 노드에서 깊이 우선 탐색
void dfs(int node)
{
    visited[node] = true; // 현재 노드를 방문 처리

    // 인접한 노드들에 대해 DFS 재귀 호출
    for (auto next : tree[node])
    {
        if (parent[next] == 0)
            parent[next] = node;
        if (!visited[next])
        { // 아직 방문하지 않은 노드만 탐색
            dfs(next);
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

    for (int i = 0; i < n - 1; i++)
    {
        int u, v, w;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    dfs(1);

    for (int i = 2; i <= n; i++)
    {
        cout << parent[i] << '\n';
    }

    return 0;
}
