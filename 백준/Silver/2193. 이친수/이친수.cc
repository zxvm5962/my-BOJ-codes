#include <stdio.h>

long long dp[91];

long long pinary(int n) {
  if (n == 1)
    return 1;
  else if (n == 2)
    return 1;
  else {
    dp[1] = 1;
    dp[2] = 1;
    for (int i = 3; i <= n; i++) {
      dp[i] = dp[i - 2] + dp[i - 1];
    }
  }
  return dp[n];
}
int main() {
  int n;
  scanf("%d", &n);

  printf("%lld", pinary(n));

  return 0;
}