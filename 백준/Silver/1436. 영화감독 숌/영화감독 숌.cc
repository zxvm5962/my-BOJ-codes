#include <stdio.h>

int main() {
  int n, cnt = 0, j = 0, rest[12] = {0}, k = 1;
  scanf("%d", &n);
  int num, arr[10002] = {0};
  for (int i = 666; i < 5000000; i++) {
    num = i;
    j=0;
    while (num != 0) {
      rest[j] = num % 10;
      num /= 10;
      j++;
    }
    for (int p = 0; p < j-2; p++) {
      if (rest[p] == 6) {
        if (rest[p] == rest[p + 1] && rest[p]== rest[p + 2]) {
          arr[k] = i;
          k++;
          break;
        }
      }
    }
    if(k == 10001)
      break;
  }
  printf("%d",arr[n]);
}