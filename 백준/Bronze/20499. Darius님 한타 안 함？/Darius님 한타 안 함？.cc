#include <stdio.h> 
int main(){
  int k,d,a;
  char c,f;
  scanf("%d%c%d%c%d",&k,&c,&d,&f,&a);
  if(d==0)
    printf("hasu");
  else if(k+a < d)
    printf("hasu");
  else
    printf("gosu");
}