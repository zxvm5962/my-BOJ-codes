#include <algorithm>
#include <iostream>

using namespace std;

int bag[101][100001];

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, k; // k = 최대 무게
  int w, v;

  cin >> n >> k;
  for (int i = 1; i <= n; i++) {
    cin >> w >> v;
    for (int j = 1; j <= k; j++) {
      if (j - w >= 0) {
        bag[i][j] = max(bag[i - 1][j - w] + v, bag[i-1][j]);
      }
      else
        bag[i][j] = bag[i-1][j];
    }
  }
  cout << bag[n][k];

  return 0;
}
