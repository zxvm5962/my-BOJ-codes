#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;

vector<vector<int>> graph;
vector<bool> visited;
bool found = false;

void dfs(int node, int depth){
    if(depth >= 4){
        found = true;
        return;
    }

    visited[node] = true;

    for (int nxt : graph[node])
    {
        if (!visited[nxt])
        {
            dfs(nxt, depth + 1);
            if (found)
                return;
        }
    }

    visited[node] = false; // 백트래킹: 다른 경로 탐색 위해 되돌리기
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;

    cin >> n >> m;

    graph.resize(n);
    visited.resize(n, false);

    int a, b;

    for(int i = 0; i < m; i++){
        cin >> a >> b;

        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for (int i = 0; i < n; i++)
    {
        dfs(i, 0);

        if(found){
            cout << 1;
            return 0;
        }
        
        fill(visited.begin(), visited.end(), false);
    }
    
    cout << 0;

    return 0;
}
