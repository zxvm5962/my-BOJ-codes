#include <stdio.h>

int main() {
  int arr[1025][1025] = {0};
  int n, m, x1, y1, x2, y2, result,sum=0;
  scanf("%d %d", &n, &m);
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      scanf("%d", &arr[i][j]);
    }
  }

  for (int i = 1; i <= n; i++) {
    sum =0;
    for (int j = 1; j <= n; j++) {
      sum += arr[i][j];
      arr[i][j] = sum;
    }
  }
  
  for (int i = 2; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      arr[i][j] = arr[i][j] + arr[i-1][j];
    }
  }

  for (int i = 0; i < m; i++) {
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    result = arr[x2][y2] - arr[x1 - 1][y2] - arr[x2][y1 - 1] +
             arr[x1 - 1][y1 - 1];
    printf("%d\n", result);
    result =0;
  }

  return 0;
}