#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int x;
  int y;
} con;

int compare(const void *first, const void *second) {
  con a = *(con *)first;
  con b = *(con *)second;
  if (a.y == b.y) {
    return b.x - a.x; // d가 같으면 p가 큰 순으로 정렬
  } else
    return a.y - b.y;
}
int compare2(const void *first, const void *second) {
  return *(int *)first - *(int *)second;
}

int main() {
  int n, day = 1, cnt = 0, now[20001] = {0};
  long long sum = 0, temp;
  scanf("%d", &n);
  con list[10001] = {0};
  for (int i = 0; i < n; i++) {
    scanf("%d %d", &list[i].y, &list[i].x);
  }

  qsort(list, n, sizeof(con), compare);

  for (int i = 0; i < n; i++) {
    if (list[i].y >= day) {
      sum += list[i].x;
      day++;
      now[cnt] = list[i].x;
      cnt++;
    } 
    else if (list[i].y < day) { // list[i].y 가 day 값보다 작으면 비교
      qsort(now, cnt, sizeof(int), compare2);// now 오름차순
      temp = sum - now[0] + list[i].x;
      if (sum < temp) {
        sum = temp;
        now[0] = list[i].x; //한번 소거 한 값 바꿔 다시 바꾸는 경우 제거
      }
    }
  }
  printf("%lld", sum);

  return 0;
}

