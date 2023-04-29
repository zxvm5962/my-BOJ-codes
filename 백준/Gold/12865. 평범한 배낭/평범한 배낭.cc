#include <stdio.h>
#define max(a, b) a > b ? a : b

int dp[102][100002] = {0};

int main() {
  int n, k;
  int v[102] = {0}, l[102] = {0};
  scanf("%d %d", &n, &k);

  for (int i = 1; i <= n; i++) {
    scanf("%d %d", &l[i], &v[i]);
  }

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= k; j++) {
      if (j - l[i] >= 0) { //무게보다 적음, 가능
        dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - l[i]] + v[i]);
      } else
        dp[i][j] = dp[i - 1][j];
    }
  }
  printf("%d", dp[n][k]);
  return 0;
}
