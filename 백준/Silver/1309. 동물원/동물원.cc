#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int dp[100001];

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, rest = 9901;

  dp[1] = 3;
  dp[2] = 7;
  dp[3] = 17;
  cin >> n;

  for (int i = 4; i <= n; i++) {
    dp[i] = (2 * dp[i - 1] + dp[i - 2]) % rest;
  }
  cout << dp[n];

  return 0;
}
