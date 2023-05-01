#include <stdio.h>

int main() {
  int n, pnum[1200000] = {0}, num;
  scanf("%d", &n);
  pnum[0] = 1;
  pnum[1] = 1;
  for (int i = 2; i < 60000; i++) {
    for (int j = 2; i * j < 1200000; j++) {
      pnum[i * j] = 1;
    }
  }
  for (int i = 2; i < 1200000; i++) {
    if (pnum[i] == 0 && i >= n) {
      num = i;
      int reverse = 0;
      while (num != 0) {
        reverse *= 10;
        reverse += num % 10;
        num /= 10;
      }
      if (reverse == i) {
        printf("%d", i);
        return 0;
      }
    }
  }

  return 0;
}
