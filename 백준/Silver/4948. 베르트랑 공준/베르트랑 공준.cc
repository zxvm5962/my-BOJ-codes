#include <stdio.h>

int main() {
  int n, arr[250000] = {0};
  arr[1] = -1;
  while (1) {
    int cnt = 0;
    scanf("%d", &n);
    for (int i = 2; i <= 2 * n; i++) {
      for (int j = 2; i * j <= 2 * n; j++) {
        arr[i * j] = -1;
      }
      if (arr[i] == 0 && n < i)
        cnt++;
    }
    if (n == 0)
      break;
    printf("%d\n", cnt);
  }

  return 0;
}
