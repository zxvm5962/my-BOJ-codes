#include <stdio.h>

int main() {
  int n, num2, num5;
  scanf("%d", &n);
  num5 = n / 5;
  n -= 5 * num5;
  while (n % 2 != 0) {
    if (num5 == 0)
      break;
    n += 5;
    num5--;
  }
  if (n % 2 != 0) {
    printf("-1");
  } else {
    num2 = n / 2;
    printf("%d", num5 + num2);
  }

  return 0;
}
