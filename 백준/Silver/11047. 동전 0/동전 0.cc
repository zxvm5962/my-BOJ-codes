#include <stdio.h>

int main() {
  int n, m, num, coin[11], total = 0;
  scanf("%d %d", &n, &m);

  for (int i = n - 1; i >= 0; i--) {
    scanf("%d", &coin[i]);
  }
  int i = 0;
  while (m > 0) {
    total += (m / coin[i]);
    m -= coin[i] * (m / coin[i]);
    i++;
  }
  printf("%d", total);
  return 0;
}