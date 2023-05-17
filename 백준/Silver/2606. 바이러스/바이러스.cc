#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool visited[101];
vector<int> graph[101];

void dfs(int x) {
  visited[x] = true;
  for (int i = 0; i < graph[x].size(); i++) {
    int y = graph[x][i];
    if (!visited[y])
      dfs(y);
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, m, u, v;
  int cnt = -1;

  cin >> n >> m;
  while (m--) {
    cin >> u >> v;
    graph[u].push_back(v);
    graph[v].push_back(u);
  }
  dfs(1);
  for (int i = 1; i <= n; i++) {
    if (visited[i])
      cnt++;
  }
  cout << cnt;

  return 0;
}
