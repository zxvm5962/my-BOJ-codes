#include <stdio.h>

int main() {
  int t, n;
  long long arr[101] = {0};
  scanf("%d", &t);
  for (int i = 0; i < t; i++) {
    scanf("%d", &n);
    arr[0] = 1, arr[1] = 1, arr[2] = 1, arr[3] = 2, arr[4] = 2;
    if (n > 4) {
      for (int k = 0; k < n - 4; k++) {
        arr[k + 5] = arr[k] + arr[k + 4];
      }
      printf("%lld\n", arr[n - 1]);
    } 
    else
      printf("%lld\n", arr[n-1]);
  }

  return 0;
}