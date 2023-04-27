#include <stdio.h>

int main() {
  int n, cnt = 0,check =0;
  scanf("%d", &n);
  while (1) {
    for (int i = 0; i < cnt; i++) {
      printf(" ");
    }
    for (int i = 0; i < 2 * n - 1 - 2*cnt; i ++) {
      printf("*");
    }
    printf("\n");
    check ++;
    if(check>n-1)
      cnt--;
    else
      cnt++;
    if(cnt<0)
      break;
  }
}