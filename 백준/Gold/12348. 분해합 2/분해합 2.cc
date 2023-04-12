#include <stdio.h>

long long check(long long a) {
  long long b = a;
  while (a != 0) {
    b += a % 10;
    a /= 10;
  }
  return b;
}

int main() {
  long long n;
  int cnt=0;
  scanf("%lld",&n);
  if (n > 300) {
    for (long long i = n - 300; i <= n; i++) {
      if (check(i) == n) {
        printf("%lld", i);
        cnt++;
        break;
      }
    }
    if(cnt==0){
      printf("0");
    }
  }
  else {
    for(int i=1;i<n;i++){
      if(check(i)==n){
        printf("%d",i);
        cnt++;
        break;
      }
    }
    if(cnt==0)
      printf("0");
  }

  return 0;
}