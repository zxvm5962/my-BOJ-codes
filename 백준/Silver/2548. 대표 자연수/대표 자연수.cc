#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) { return *(int *)a - *(int *)b; }

int main() {
  int n, arr[20001], sum = 0, min = 200000001, sum2 = 0, result;
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  qsort(arr, n, sizeof(int), compare);

  for (int i = 1; i <= 10000; i++) {
    sum2 = 0;
    for (int j = 0; j < n; j++) {
      sum2 += abs(i - arr[j]);
    }
    if (min > sum2) {
      min = sum2;
      result = i;
    }
  }
  printf("%d",result);

  return 0;
}