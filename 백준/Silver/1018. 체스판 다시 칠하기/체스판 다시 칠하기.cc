#include <stdio.h>
#define min(a, b) a < b ? a : b

int main() {
  int n, m, cnt1 = 0, cnt2 = 0, res = 32, min1, min2;
  scanf("%d %d", &n, &m);
  char board[n][m];
  for (int i = 0; i < n; i++) { 
      scanf("%s", board[i]);
    
  }
  for (int o = 0; o <= n - 8; o++) {
    for (int k = 0; k <= m - 8; k++) {
      cnt1 = 0, cnt2 = 0;
      for (int i = o; i < o + 8; i++) {
        for (int j = k; j < k + 8; j++) {
          if ((i + j) % 2 == 0 && board[i][j] == 'W')
            cnt1++;
          else if ((i + j) % 2 == 1 && board[i][j] == 'B')
            cnt1++;
          if ((i + j) % 2 == 0 && board[i][j] == 'B')
            cnt2++;
          else if ((i + j) % 2 == 1 && board[i][j] == 'W')
            cnt2++;
        }
      }
      min1 = min(cnt1, cnt2);
      res = min(min1, res);
    }
  }
  printf("%d", res);

  return 0;
}
