#include <stdio.h>
#include <stdlib.h>

int static compare(const void *first, const void *second) {
  if (*(int *)first < *(int *)second)
    return 1;
  else if (*(int *)first > *(int *)second)
    return -1;
  else
    return 0;
}

int main() {
  int n, num1, cnt = 0;
  scanf("%d", &n);
  int arr[n - 1];
  scanf("%d", &num1);
  arr[0] = 0;
  for (int i = 0; i < n - 1; i++) {
    scanf("%d", &arr[i]);
  }

  qsort(arr, sizeof(arr) / sizeof(int), sizeof(int), compare);

  if (arr[0] < num1) {
    printf("0");

  } else if (arr[0] == num1) {
    printf("1");
    
  } else {
    while (num1 <= arr[0]) {
      num1++;
      arr[0]--;
      cnt++;
      qsort(arr, sizeof(arr) / sizeof(int), sizeof(int), compare);
    }
    printf("%d", cnt);
  }

  return 0;
}