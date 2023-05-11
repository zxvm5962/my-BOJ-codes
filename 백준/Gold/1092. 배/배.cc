#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) { return *(int *)a - *(int *)b; }

int main() {
  int n, m, cnt = 0, check = 0, j, temp[10001] = {0};
  int crane[51] = {0}, box[10001] = {0};

  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &crane[i]);
  }

  scanf("%d", &m);
  for (int i = 0; i < m; i++) {
    scanf("%d", &box[i]);
  }

  qsort(crane, n, sizeof(int), compare);
  qsort(box, m, sizeof(int), compare); //전부 오름차순

  while (1) {
    j = n - 1;
    for (int i = m - 1; i >= 0; i--) {
      if (box[i] != 0 && box[i] <= crane[j]) { //크레인 용량이 박스보다 크면
        box[i] = 0;
        check++;
        j--;
      }
      if (j < 0)
        break;
    }
    cnt++;          //횟수 증가
    if (check == m) //박스가 모두 없으면 종료
      break;
    if(cnt > 10000){
      printf("-1");
      return 0;
    }
  }
  printf("%d", cnt);

  return 0;
}
