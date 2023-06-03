#include <stdio.h>
int main() {
  int t, price;
  scanf("%d", &t);
  int n, m, k;
  while (t--) {
    scanf("%d", &price);
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
      scanf("%d %d", &m, &k);
      price += m * k;
    }

    printf("%d\n", price);
  }
  return 0;
}