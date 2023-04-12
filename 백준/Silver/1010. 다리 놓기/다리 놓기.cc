#include <stdio.h>

int main() {
  int n, m, num;
  scanf("%d", &num);
  for (int j = 0; j < num; j++) {
    unsigned long long up = 1, down = 1;
    scanf("%d %d", &n, &m);
    for (int i = n+1; i <= m; i++) {
      down = down * (i-n);
      up = (up * i) / down;
      down = 1;
    }

    printf("%lld\n", up / down);
  }
  return 0;
}