#include <stdio.h>

int dp[1000001];

int main(){
  int n,rest = 15746;
  scanf("%d",&n);
  dp[1] = 1;
  dp[2] = 2;
  for(int i=3;i<=n;i++){
    dp[i] = (dp[i-2]%rest + dp[i-1]%rest)%rest;
  }
  printf("%d",dp[n]);
  
  return 0;
}