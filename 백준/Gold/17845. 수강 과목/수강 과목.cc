#include <stdio.h>
#define max(a, b) a > b ? a : b

int dp[1001][10001] = {0};

int main() {
  int n, k, imp[1001], time[1001];
  scanf("%d %d", &n, &k);
  for (int i = 1; i <= k; i++) {
    scanf("%d %d", &imp[i], &time[i]);
  }

  for (int i = 1; i <= k; i++) {
    for(int j=0;j<=n;j++){
      if(j-time[i] >=0){
        dp[i][j] = max(dp[i-1][j] ,dp[i-1][j-time[i]] + imp[i]);
      }
      else
        dp[i][j] = dp[i-1][j];
    }
  }
  printf("%d",dp[k][n]);
  return 0;
}
