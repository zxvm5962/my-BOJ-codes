#include <stdio.h>
#include <stdlib.h>

int static compare(const void *first, const void *second) {
  if (*(int *)first > *(int *)second)
    return 1;
  else if (*(int *)first < *(int *)second)
    return -1;
  else
    return 0;
}

int main() {
  int n, rank[101][101] = {0}, num1, num2, score, check[101] = {0};
  scanf("%d", &n);
  int temp[n],cnt=0;
  for (int i = 0; i < n; i++) {
    scanf("%d %d %d", &num1, &num2, &score);
    rank[num1][num2] = score;
    temp[i] = score;
  }

  qsort(temp, sizeof(temp) / sizeof(int), sizeof(int), compare);

  for (int i = n - 1; i > 0; i--) {
    for (int j = 1; j < n; j++) {
      for (int k = 1; k < n-1; k++) {
        if (rank[j][k] == temp[i] && check[j]<2) {
          check[j] ++;
          cnt ++;
          printf("%d %d\n", j, k);
          goto next;
        }
      }
    }
    next: if(cnt==3){
      break;
    }
  }

  return 0;
}