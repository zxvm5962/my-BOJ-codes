#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int x;
  char name[101];
} judge;

int compare(const void *first, const void *second) {
  judge a = *(judge *)first;
  judge b = *(judge *)second;
  return a.x - b.x;
}

int main() {
  int n;
  scanf("%d", &n);
  judge list[n];
  for (int i = 0; i < n; i++) {
    scanf("%d %s", &list[i].x, list[i].name);
  }

  qsort(list, n, sizeof(judge), compare);

  for (int i = 0; i < n; i++) {
    printf("%d %s\n", list[i].x, list[i].name);
  }

  return 0;
}