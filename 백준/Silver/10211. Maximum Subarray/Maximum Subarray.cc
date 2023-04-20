#include <stdio.h>

int main() {
  int t, n, num, check, max_v = 0;
  scanf("%d", &t);
  for (int i = 0; i < t; i++) {
    scanf("%d", &n);
    int sum = 0, psum[1001] = {0},max_v=-1001;
    for (int j = 1; j <= n; j++) {
      scanf("%d", &num);
      sum += num;
      psum[j] = sum;
    }
    for (int j = n; j >= 1; j--) {
      for (int k = 0; k < j; k++) {
        check = psum[j] - psum[k];
        if (max_v < check)
          max_v = check;
      }
    }
    printf("%d\n", max_v);
  }
}
