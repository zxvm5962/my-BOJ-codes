#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int st;
  int ft;
} room;

int compare(const void *first, const void *second) {
  room a = *(room *)first;
  room b = *(room *)second;
  if (a.ft == b.ft)
    return a.st - b.st;
  else
    return a.ft - b.ft;
}

int main() {
  int n,cnt = 1;
  scanf("%d", &n);
  room list[n];
  for (int i = 0; i < n; i++) {
    scanf("%d %d", &list[i].st, &list[i].ft);
  }

  qsort(list, n, sizeof(room), compare);

  int ch = 0;
  for (int i = 1; i < n; i++) {
    if(list[ch].ft <= list[i].st){
      ch = i;
      cnt++;
    }
  }
  printf("%d",cnt);

  return 0;
}
