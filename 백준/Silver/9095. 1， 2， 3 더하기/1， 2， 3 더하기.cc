#include <stdio.h>

int dp[12];

int main() {
  int n, m;
  dp[1] = 1, dp[2] = 2, dp[3] = 4;
  for(int i=4;i<=11;i++){
    dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
  }
  scanf("%d", &n);
  while (n--) {
    scanf("%d", &m);
    printf("%d\n",dp[m]);
  }

  return 0;
}
