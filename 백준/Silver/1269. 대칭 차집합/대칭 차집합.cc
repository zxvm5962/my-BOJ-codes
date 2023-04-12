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
  scanf("%d %d", &n,&m);
  int arr[n];
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
    
  qsort(arr, sizeof(arr) / sizeof(int), sizeof(int), compare);
  

  int arr2[200001];
  for (i = 0; i < m; i++) {
    scanf("%d", &arr2[i]);
  }
  for (i = 0; i < m; i++) {
    lo = 0, hi = n - 1;
    while (lo <= hi) {
      mid = (lo + hi) / 2;
      if (arr[mid] == arr2[i]) {
        cnt++;
        break;
      } else if (arr[mid] > arr2[i]) {
        hi = mid - 1;
      } else {
        lo = mid + 1;
      }
    }
  }
  printf("%d", n+m - 2*cnt);

  return 0;
}