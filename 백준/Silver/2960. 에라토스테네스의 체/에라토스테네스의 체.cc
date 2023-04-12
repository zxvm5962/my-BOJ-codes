#include <stdio.h>

int main() {
  int n, k, cnt = 0, num[1001] = {0};
  int result;
  scanf("%d %d", &n, &k);
  for (int i = 2; i <= n; i++) {
    for (int j = 1; i * j <= n; j++) {
      if (num[i * j] == 0) {
        num[i * j] = 1;
        cnt++;
      }
      if (cnt == k) {
        result = i * j;
        goto fin;
      }
    }
  }
  fin : printf("%d", result);

  return 0;
}