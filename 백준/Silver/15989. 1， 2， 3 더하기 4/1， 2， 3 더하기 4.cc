#include <stdio.h>

int coin[101] = {0};
int dp[10001] = {0};
int main() {
  int n, t;
  scanf("%d", &t);

  coin[2] = 3;
  coin[1] = 2;
  coin[0] = 1;

  while (t--) {
    scanf("%d", &n);
    for (int j = 0; j <= n; j++) {
      dp[j] = 0;
    }
    dp[0] = 1;
    for (int i = 2; i >= 0; i--) {
      for (int j = 0; j <= n; j++) {
        if (j - coin[i] >= 0)
          dp[j] += dp[j - coin[i]];
      }
    }
    printf("%d\n", dp[n]);
  }

  return 0;
}
