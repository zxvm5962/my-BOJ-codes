#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int num;
  int go;
  int si;
  int br;
} list;

int compare(const void *first, const void *second) {
  list b = *(list *)first;
  list a = *(list *)second;
  if (a.go == b.go) {
    if (a.si == b.si) {
      return a.br - b.br;
    } else
      return a.si - b.si;
  } else
    return a.go - b.go;
}

int main() {
  int n, k, cnt = 0, score[1001] = {0}, check, cnt2 = 1;
  list olym[1001];
  scanf("%d %d", &n, &k);
  for (int i = 0; i < n; i++) {
    scanf("%d %d %d %d", &olym[i].num, &olym[i].go, &olym[i].si, &olym[i].br);
  }

  qsort(olym, n, sizeof(list), compare);

  score[0] = 1;
  for (int i = 0; i < n-1; i++) {
    if (olym[i].go == olym[i + 1].go && olym[i].si == olym[i + 1].si &&
        olym[i].br == olym[i + 1].br) {
      score[i] = cnt2,score[i+1] = cnt2;
    } else {
      score[i+1] = i + 2;
      cnt2 = i +2;
    }

    if (olym[i].num == k) {
      check = i;
      break;
    }
  }

  printf("%d", score[check]);

  return 0;
}
