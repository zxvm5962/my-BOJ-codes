#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int graph[2501][2501];
int n, m;

bool dfs(int x, int y) {
  if (x < 0 && x >= n && y < 0 && y >= m)
    return false;
  if (graph[x][y] == 1) {
    graph[x][y] = 0;
    dfs(x - 1, y), dfs(x, y - 1), dfs(x + 1, y), dfs(x, y + 1);
    return true;
  }
  return false;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, k, X, Y;
  cin >> t;
  while (t--) {
    int cnt = 0;
    cin >> m >> n >> k;
    while (k--) {
      cin >> X >> Y;
      graph[Y][X] = 1;
    }
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (dfs(i, j))
          cnt++;
      }
    }
    cout << cnt << "\n";
  }

  return 0;
}
