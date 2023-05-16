#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

bool visited[1001], visited2[1001];
vector<int> graph[1001], graph2[1001];

void dfs(int x) {
  visited[x] = true;
  cout << x << " ";
  for (int i = 0; i < graph[x].size(); i++) {
    int y = graph[x][i];
    if (!visited[y])
      dfs(y); // 재귀적으로 방문
  }
}

void bfs(int start) {
  queue<int> q;
  q.push(start); // 첫 노드를 queue에 삽입
  visited2[start] = true;

  while (!q.empty()) {
    int x = q.front();
    q.pop();
    cout << x << ' ';
    // 해당 원소와 연결된, 아직 방문하지 않은 원소들을 큐에 삽입
    for (int i = 0; i < graph2[x].size(); i++) {
      int y = graph2[x][i];
      if (!visited2[y]) {
        q.push(y);
        visited2[y] = true;
      }
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, m, v;
  int begin, end;
  cin >> n >> m >> v;
  while (m--) {
    cin >> begin >> end;
    graph[begin].push_back(end);
    graph[end].push_back(begin);

    graph2[begin].push_back(end);
    graph2[end].push_back(begin);
  }
  for (int i = 0; i <= n; i++) {
    sort(graph[i].begin(), graph[i].end());
    sort(graph2[i].begin(), graph2[i].end());
  }
  dfs(v);
  cout << "\n";
  bfs(v);

  return 0;
}
