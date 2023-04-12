#include <stdio.h>

int main() {
  int a, b, c,n, i, num = 1, rest;
  scanf("%d %d",&a,&b);
  scanf("%d %d",&c,&n);
  if (a>c) printf("0");
  else if (a==c) {
    if(b>0){
      printf("0");
    }
    else printf("1");
  }
  else{
    if (a *n + b > c*n){
      printf("0");
    }
    else printf("1");
  }
  
  return 0;
}