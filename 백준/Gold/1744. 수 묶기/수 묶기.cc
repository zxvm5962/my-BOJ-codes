#include <stdio.h>
#include <stdlib.h>
#define max(a,b) a>b ? a:b

int compare(const void *a, const void *b) { return *(int *)a - *(int *)b; }

int main() {
  int n, arr[51] = {0}, check, sum = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  qsort(arr, n, sizeof(int), compare);

  for (int i = 0; i < n; i++) {
    if (arr[i] > 0) {
      check = i;
      break;
    }
  }

  for (int i = 0; i + 1 < check; i += 2) {
    sum += arr[i] * arr[i + 1];
  }
  if (check % 2 == 1) // check 홀수, 0 * 1, 2 이므로 2 더해주기
    sum += arr[check - 1];

  for (int i = n - 1; i > check; i -= 2) {
    sum += max(arr[i] + arr[i-1] ,arr[i] * arr[i - 1]);
  }
  if ((n - check) % 2 == 1) //  n짝수, 6*5 4이므로 4 더해주기
    sum += arr[check];
  printf("%d", sum);

  //-3 -2 -1 4 5 6
  return 0;
}
