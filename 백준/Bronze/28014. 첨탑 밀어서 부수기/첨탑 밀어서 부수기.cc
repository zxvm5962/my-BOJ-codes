#include <stdio.h>

int list[5000001];

int main() {
  int n, cnt = 1;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &list[i]);
  }
  for (int i = 1; i < n; i++) {
    if(list[i-1] > list [i])
      continue;
    else
      cnt++;
  }
  printf("%d",cnt);
  return 0;
}
