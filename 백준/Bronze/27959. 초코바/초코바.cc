#include <stdio.h>

int main(){
  int n,m;
  scanf("%d %d",&n,&m);
  n *= 100;
  if((n - m)>=0)
    printf("Yes");
  else
    printf("No");
}