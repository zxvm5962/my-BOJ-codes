#include <stdio.h>

int main() {
  int n, k, num[120] = {0};
  num[1] = 1, num[0] = 1;
  for (int i = 2; i < 119; i++) {
    for (int j = 2; i * j < 119; j++) {
      num[i * j] = 1;
    }
  }
  
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &k);
    int cnt = 0;
    for (int i = 2; i < 119; i++) {
      for (int j = 2; j < 119; j++) {
        if (num[i] == 0 && num[j] == 0) {
          if (i + j == k) {
            cnt = 1;
          }
        }
      }
    }
    if (cnt == 0)
      printf("No\n");
    else
      printf("Yes\n");
  }
  return 0;
}