#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) { return *(int *)a - *(int *)b; }

int num[5000001] = {0};

int main() {
  int n, k;
  scanf("%d %d", &n, &k);
  for (int i = 0; i < n; i++) {
    scanf("%d", &num[i]);
  }

  qsort(num, n, sizeof(int), compare);

  printf("%d", num[k - 1]);

  return 0;
}