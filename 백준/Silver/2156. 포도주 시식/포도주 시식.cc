#include <stdio.h>
int max(int a, int b, int c) {
  if (a >= b && a >= c)
    return a;
  else if (b >= c)
    return b;
  else
    return c;
}
int dp[10001] = {0}, grape[10001], max_num;

int main() {
  int n;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    scanf("%d", &grape[i]);
  }
  dp[1] = grape[1];
  dp[2] = grape[1] + grape[2];
  dp[3] = max(grape[1] + grape[3], grape[2] + grape[3], grape[1] + grape[2]);
  for (int i = 4; i <= n; i++) {
    dp[i] = max(dp[i - 2] + grape[i], dp[i - 3] + grape[i - 1] + grape[i],
                dp[i - 1]);
  }
  printf("%d", dp[n]);

  return 0;
}
