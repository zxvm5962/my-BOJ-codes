#include <stdio.h>

int main() {
  int n, arr[52] = {0}, max = 0, check, s, sum = 0;
  int temp, start = 0, cnt = 0, arr2[52] = {0};

  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
    arr2[i] = arr[i];
  }
  scanf("%d", &s);
  if (s == 0) {
    for (int i = 0; i < n; i++) {
      printf("%d ", arr2[i]);
    }
    return 0;
  }
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - 1; j++) {
      if (arr2[j] < arr2[j + 1]) {
        temp = arr2[j];
        arr2[j] = arr2[j + 1];
        arr2[j + 1] = temp;
        cnt++;
      }
    }
  }
  if (cnt <= s) {
    for (int i = 0; i < n; i++) {
      printf("%d ", arr2[i]);
    }
    return 0;
  }

  while (start < n) {
    max = 0;
    for (int i = start; i < n && i <= start + s; i++) {
      if (max < arr[i]) {
        max = arr[i];
        check = i;
      }
    }
    for (int i = check; i > start; i--) {
      temp = arr[i];
      arr[i] = arr[i - 1];
      arr[i - 1] = temp;
      s--;
      if (s == 0) {
        for (int j = 0; j < n; j++) {
          printf("%d ", arr[j]);
        }
        return 0;
      }
    }
    start++;
  }

  return 0;
}
