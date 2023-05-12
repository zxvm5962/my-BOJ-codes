#include <stdio.h>
#include <stdlib.h>
#define min(a, b) a < b ? a : b

int compare(const void *a, const void *b) { return *(int *)a - *(int *)b; }
int dp[10001], coin[101];

int main() {
  int n, k;
  scanf("%d %d", &n, &k);

  for (int i = 0; i < n; i++) {
    scanf("%d", &coin[i]);
  }
  qsort(coin, n, sizeof(int), compare);

  for (int i = 0; i < n; i++) {
    if (coin[i] <= 10000) {
      for (int j = 1; j <= k; j++) {
        if (j - coin[i] >= 0) {
          if (dp[j] == 0) {
            if (j - coin[i] == 0 || dp[j - coin[i]] != 0)
              dp[j] = dp[j - coin[i]] + 1;
          } 
          else {
            if (j - coin[i] == 0 || dp[j - coin[i]] != 0)
              dp[j] = min(dp[j], dp[j - coin[i]] + 1);
          }
        }
      }
    }
  }
  if (dp[k] == 0)
    printf("-1");
  else
    printf("%d", dp[k]);

  return 0;
}


