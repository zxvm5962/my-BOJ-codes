#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int dp[1101], cost[22], val[22];

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int c, n, minv = 100002, max = 0;

  cin >> c >> n;
  for (int i = 0; i < n; i++) {
    cin >> cost[i] >> val[i];
    if (max < val[i])
      max = val[i];
  }

  for (int i = n - 1; i >= 0; i--) {
    if (dp[val[i]] != 0)
      dp[val[i]] = min(dp[val[i]], cost[i]);
    else
      dp[val[i]] = cost[i];
    for (int j = 1; j < c + max; j++) {
      if (j - val[i] >= 0 && dp[j - val[i]] > 0) {
        if (dp[j] == 0)
          dp[j] = dp[j - val[i]] + cost[i];
        else
          dp[j] = min(dp[j - val[i]] + cost[i], dp[j]);
      }
    }
  }

  for (int i = c; i < c + max; i++) {
    if (dp[i] > 0 && minv > dp[i])
      minv = dp[i];
  }

  cout << minv;

  return 0;
}
