#include <stdio.h>
int main() {

  int n, m, up, down;
  int i = 1, sum = 0, cnt = 0;
  scanf("%d", &n);
  while (sum < n) {
    sum += i;
    i++;
    cnt++;
  }
  if (i % 2 == 1) {
    for (int i = 0; i <= sum - n; i++) {
      up = cnt - i;
      down = 1 + i;
    }
  }
  else if (i % 2 == 0) {
    for (int i = 0; i <= sum - n; i++) {
      up = 1+i;
      down = cnt-i;
    }
  }
  printf("%d/%d", up, down);

  return 0;
}
