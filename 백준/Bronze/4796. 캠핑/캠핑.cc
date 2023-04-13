#include <stdio.h>

int main() {
  int l, p, v,i=1;
  while (1) {
    scanf("%d %d %d", &l, &p, &v);
    if (l == 0 && p == 0 && v == 0)
      break;
    else {
      int cnt = 0;
      while (v > p) {
        v -= p;
        cnt++;
      }
      if (v >= l) {
        cnt++;
        printf("Case %d: %d\n", i, cnt * l);
      } else {
        printf("Case %d: %d\n", i, cnt * l + v);
      }
    }
    i++;
  }
  return 0;
}