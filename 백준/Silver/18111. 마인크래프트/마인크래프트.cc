#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, m, k, mine[501][501] = {0},low = 257, high = 0;
  int tsum = 0, inven, temp, min = 200000000, max = 0;
  scanf("%d %d %d", &n, &m, &k);
  inven = k;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      scanf("%d", &mine[i][j]);
      if (high < mine[i][j])
        high = mine[i][j];
      if (low > mine[i][j])
        low = mine[i][j];
    }
  }
  for (int p = low; p <= high; p++) {
    inven = k, tsum = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        temp = mine[i][j] - p;
        if (temp > 0) {
          tsum += temp * 2;
          inven += temp;
        } 
        else if (temp < 0) {
          inven += temp;
          tsum -= temp;
        }
      }
    }
    if (inven < 0) {
      continue;
    } 
    else {
      if (min >= tsum) {
        min = tsum;
        if (max < p)
          max = p;
      }
    }
  }
  printf("%d %d", min, max);
  return 0;
}
