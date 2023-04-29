#include <stdio.h>
#define max(a,b) a>b ? a:b

int main() {
  int n;
  int dp[22][101] = {0}, v[22] = {0},l[22] = {0};
  scanf("%d",&n);

  for (int i = 1; i <= n; i++) {
    scanf("%d", &l[i]);
  }
  for (int i = 1; i <= n; i++) {
    scanf("%d", &v[i]);
  }

  for (int i = 1; i <= n; i++) {
    for(int j=0;j<100;j++){
      if(j-l[i]>=0){//체력보다 잃는게 적음, 가능
        dp[i][j] = max(dp[i-1][j],dp[i-1][j-l[i]] + v[i]);
      }
      else
        dp[i][j] = dp[i-1][j];
    }
  }
  printf("%d",dp[n][99]);
  return 0;
}
