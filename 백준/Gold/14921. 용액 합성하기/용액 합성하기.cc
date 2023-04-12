#include <stdio.h>
#include <stdlib.h>

int static compare(const void *first, const void *second) {
  int num1 = *(int *)first;
  int num2 = *(int *)second;

  if (num1 > num2)
    return 1;
  else if (num1 < num2)
    return -1;
  else
    return 0;
}

int main() {
  int n, left = 0, right = 0, result, min, min_left, min_right;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  qsort(arr, sizeof(arr) / sizeof(int), sizeof(int), compare);

  left = 0, right = n - 1;
  int check = 2000000000;

  while (left < right) {
    min = arr[left] + arr[right];
    if (check > abs(min)) {
      min_left = left, min_right = right;
      check = abs(min);
    }
    if (min < 0)
      left++;
    else
      right--;
  }

  printf("%d", arr[min_left] +  arr[min_right]);

  return 0;
}
