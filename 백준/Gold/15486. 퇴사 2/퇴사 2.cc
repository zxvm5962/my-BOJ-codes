#include <stdio.h>
#define max(a, b) a > b ? a : b
int d[1500002], v[1500002],dp[1500003];

int main() {
  int n, day, max = 0;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    scanf("%d %d", &d[i], &v[i]);
  }
  for(int i=n;i>0;i--){
    day = i + d[i];
    if(day <= n+1 ){
      dp[i] = max(dp[day] + v[i], dp[i+1]);
    }
    else
      dp[i] = dp[i+1];
  }

  printf("%d", dp[1]);

  return 0;
}
