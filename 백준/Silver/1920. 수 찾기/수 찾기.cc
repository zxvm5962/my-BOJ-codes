#include <stdio.h>
#include <stdlib.h>

int static compare (const void* first, const void* second)
{
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else
        return 0;
}

int main() {
  int lo, hi, mid, cnt = 0;
  int n, m, i;
  scanf("%d", &n);
  int arr[n];
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
    
  qsort(arr, sizeof(arr) / sizeof(int), sizeof(int), compare);
  
  scanf("%d", &m);
  int arr2[100001];
  for (i = 0; i < m; i++) {
    scanf("%d", &arr2[i]);
  }
  for (i = 0; i < m; i++) {
    lo = 0, hi = n - 1;
    while (lo <= hi) {
      mid = (lo + hi) / 2;
      if (arr[mid] == arr2[i]) {
        cnt = 0;
        printf("1\n");
        break;
      } else if (arr[mid] > arr2[i]) {
        hi = mid - 1;
        cnt = 1;
      } else {
        lo = mid + 1;
        cnt = 1;
      }
    }
    if (cnt == 1)
      printf("0\n");
  }

  return 0;
}