#include <stdio.h>

int gcd(int a, int b){
  if(b==0)
    return a;
  else
    return gcd(b,a%b);
}

int main() {
  int n,m,k;
  char temp;
  scanf("%d%c%d",&n,&temp,&m);
  k = gcd(n,m);
  printf("%d%c%d",n/k,temp,m/k);

  return 0;
}

