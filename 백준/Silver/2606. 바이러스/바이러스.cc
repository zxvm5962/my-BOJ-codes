#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

bool visited[101];
vector<int> graph[101];
int cnt = 0;
void dfs(int x) {
  visited[x] = true;
  for (int i = 0; i < graph[x].size(); i++) {
    int y = graph[x][i];
    if (!visited[y]) {
      dfs(y);
      cnt++;
    } // 재귀적으로 방문
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int a, b, st, ed;
  cin >> a >> b;
  for (int i = 0; i < b; i++) {
    cin >> st >> ed;
    graph[st].push_back(ed);
    graph[ed].push_back(st);
  }
  dfs(1);
  printf("%d", cnt);

  return 0;
}
