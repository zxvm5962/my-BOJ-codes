#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) { return *(int *)a - *(int *)b; }

int main() {
  int n, m, num2, t, left, right, mid, check = 0;

  scanf("%d", &n);
  int num1[n];

  for (int i = 0; i < n; i++) {
    scanf("%d", &num1[i]);
  }

  qsort(num1, n, sizeof(int), compare);

  scanf("%d", &m);
  for (int j = 0; j < m; j++) {
    left = 0;
    right = n - 1;
    check = 0;
    scanf("%d", &num2);
    while (left <= right) {
      mid = (left + right) / 2;
      if (num1[left] == num2 || num1[right] == num2) {
        check = 1;
        break;
      }
      if (num1[mid] < num2)
        left = mid + 1;
      else if (num1[mid] > num2)
        right = mid - 1;
      else {
        check = 1;
        break;
      }
    }
    printf("%d ", check);
  }

  return 0;
}
