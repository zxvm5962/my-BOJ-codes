#include <stdio.h>

int main() {
  int n = 1, k;
  int pnum[1000001] = {0}, result[2] = {0};
  pnum[0] = 1, pnum[1] = 1;
  for (int i = 2; i < 500001; i++) {
    for (int j = 2; i * j <= 1000000; j++) {
      pnum[i * j] = 1;
    }
  }

  while (1) {
    scanf("%d", &n);
    if (n == 0)
      break;
    for (int i = 3; i <= n / 2; i += 2) {
      if (pnum[i] == 0 && pnum[n-i] == 0) {
        result[0] = i, result[1] = n-i;
        break;
      }
    }
    printf("%d = %d + %d\n", n, result[0], result[1]);
  }
  return 0;
}