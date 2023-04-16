#include <stdio.h>
int main() {
  long long a, b, c;
  int cnt=0;
  scanf("%lld %lld %lld", &a, &b, &c);
  int pro = c - b;
  if (c - b <= 0) {
    printf("-1");
    return 0;
  }
  else{
    cnt = a/pro +1; 
  }
  printf("%d",cnt);
}