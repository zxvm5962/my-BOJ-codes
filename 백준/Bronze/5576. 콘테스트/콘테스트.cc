#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) { return *(int *)a - *(int *)b; }
int a[10], b[10];

int main() {

  for (int i = 0; i < 10; i++) {
    scanf("%d", &a[i]);
  }
  for (int i = 0; i < 10; i++) {
    scanf("%d", &b[i]);
  }
  qsort(a, 10, sizeof(int), compare);
  qsort(b, 10, sizeof(int), compare);

  printf("%d %d",a[9]+a[8]+a[7],b[9]+b[8]+b[7]);
  return 0;
}