#include <stdio.h>
#include <stdlib.h>

int map[1001][1001];

int main() {
  int n, m, x[2] = {0}, y[2] = {0}, cnt = 0;
  scanf("%d %d", &n, &m);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      scanf("%d", &map[i][j]);
      if (map[i][j] == 1) {
        x[cnt] = i, y[cnt] = j;
        cnt++;
      }
    }
  }
  printf("%d", abs(x[0] - x[1]) + abs(y[0] - y[1]));

  return 0;
}