#include <stdio.h>
#define max(a,b) a>b ? a:b

int main() {
  int dp[301] = {0};
  int n,value[301];
  
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    scanf("%d",&value[i]);
  }
  
  dp[1] = value[1];
  dp[2] = value[1] + value[2];
  dp[3] = max(dp[1] + value[3],value[2]+value[3]);
  for(int i=4;i<=n;i++){
    dp[i] = max(value[i]+value[i-1] +dp[i-3],dp[i-2] + value[i]);
  }

  printf("%d",dp[n]);
  return 0;
}