#include <stdio.h>

int main() {
  int n, k, j = 0, num, cnt = 0;
  int arr[1001], res[1001];
  scanf("%d %d", &n, &k);
  for (int i = 0; i < n; i++) {
    arr[i] = i + 1;
  }
  int i = 0;
  while (1) {
    if (arr[i] != 0) {
      cnt++;
    }
    if (cnt == k) {
      cnt = 0;
      res[j] = arr[i];
      arr[i] = 0;
      j++;
    }
    if (j == n)
      break;
    i++;
    if (i >= n) {
      i = i - n;
    }
  }
  printf("<");
  for (int i = 0; i < n-1; i++) {
    printf("%d, ", res[i]);
  }
  printf("%d>",res[n-1]);

  return 0;
}