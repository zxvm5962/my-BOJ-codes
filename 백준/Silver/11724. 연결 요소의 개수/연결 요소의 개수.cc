#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool visited[1001];
vector<int> graph[1001];

void dfs(int x) {
  visited[x] = true;
  for (int i = 0; i < graph[x].size(); i++) {
    int y = graph[x][i];
    if (!visited[y])
      dfs(y); // 재귀적으로 방문
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, m, cnt = 0;
  int begin, end;
  cin >> n >> m;
  while (m--) {
    cin >> begin >> end;
    graph[begin].push_back(end);
    graph[end].push_back(begin);
  }
  for (int i = 1; i <= n; i++) {
    if (!visited[i]) {
      dfs(i);
      cnt++;
    }
  }
  cout << cnt;

  return 0;
}
