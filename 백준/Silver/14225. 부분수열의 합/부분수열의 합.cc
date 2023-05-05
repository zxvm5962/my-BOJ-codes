#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) { return *(int *)a - *(int *)b; }
int list[2000001] = {0}, sum = 0, rem[2000001] = {0};
int main() {
  int n, num[22] = {0};
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &num[i]);
    sum += num[i]; //최대값 구하기
  }
  qsort(num, n, sizeof(int), compare);

  for (int i = 0; i < n; i++) {
    rem[num[i]] = 1;
    for (int j = 1; j <= sum; j++) {
      if (list[j] == 1) {
        rem[j + num[i]] = 1;
      }
    }
    for (int j = 1; j <= sum; j++) {
      list[j] = rem[j];
    }
  }

  for (int i = 1; i <= sum + 1; i++) {
    if (list[i] == 0) {
      printf("%d", i);
      break;
    }
  }
  return 0;
}
