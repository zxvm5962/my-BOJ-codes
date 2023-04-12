#include <stdio.h>

int main() {
  int gaji[11][2000001], n, num;
  while (n < 2047) {
    for (int i = 0; i < 11; i++) {
      scanf("%d", &num);
      gaji[i][num + 1000000]++;
    }
    n++;
  }
  for (int i = 0; i < 11; i++) {
    for (int j = 0; j < 2000001; j++) {
      if (gaji[i][j] == 1023) {
        printf("%d ", j - 1000000);
        break;
      }
    }
  }
  return 0;
}