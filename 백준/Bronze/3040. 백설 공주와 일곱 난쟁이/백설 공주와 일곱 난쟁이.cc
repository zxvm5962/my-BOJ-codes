#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) { return *(int *)a - *(int *)b; }
int arr[10];

int main() {
  int sum = 0;
  for (int i = 0; i < 9; i++) {
    scanf("%d", &arr[i]);
    sum += arr[i];
  }
  qsort(arr,9,sizeof(int),compare);
  
  for (int i = 0; i < 9; i++) {
    for (int j = i + 1; j < 9; j++) {
      if (sum - (arr[i] + arr[j]) == 100) {
        arr[i] = 0, arr[j] = 0;
        goto fin;
      }
    }
  }
  fin : 
  for (int i = 0; i < 9; i++) {
    if (arr[i] != 0)
      printf("%d\n", arr[i]);
  }

  return 0;
}