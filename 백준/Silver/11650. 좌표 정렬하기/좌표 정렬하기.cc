#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int x;
  int y;
} axis;

int compare(const void *first, const void *second) {
  axis a = *(axis *)first;
  axis b = *(axis *)second;
  if (a.x == b.x)
    return a.y - b.y;
  else
    return a.x - b.x;
}

int main() {
  int n;
  scanf("%d", &n);
  axis list[n];
  for (int i = 0; i < n; i++) {
    scanf("%d %d", &list[i].x, &list[i].y);
  }

  qsort(list, n, sizeof(axis), compare);

  for (int i = 0; i < n; i++) {
    printf("%d %d\n", list[i].x, list[i].y);
  }

  return 0;
}