#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) { return *(int *)a - *(int *)b; }
int coin[101] = {0};
int dp[10001] = {0};
int main() {
  int n, k;
  scanf("%d %d", &n, &k);
  for (int i = 0; i < n; i++) {
    scanf("%d", &coin[i]);
  }

  qsort(coin, n, sizeof(int), compare);

  dp[0] = 1;
  for (int i = n - 1; i >= 0; i--) {
    if (coin[i] <= 10000) {
      for (int j = 0; j <= k; j++) {
        if (j - coin[i] >= 0)
          dp[j] += dp[j - coin[i]];
      }
    }
  }

  printf("%d", dp[k]);

  return 0;
}