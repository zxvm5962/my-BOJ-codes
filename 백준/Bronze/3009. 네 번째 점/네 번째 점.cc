#include <stdio.h>

int x[1001], y[1001];

int main() {
  int n,m,t=3;
  for(int i=0;i<3;i++){
    scanf("%d %d",&n,&m);
    x[n]++;
    y[m]++;
  }
  for(int i=0;i<=1000;i++){
    if(x[i] == 1)
      printf("%d ",i);
  }
  for(int i=0;i<=1000;i++){
    if(y[i] == 1)
      printf("%d",i);
  }
  
  return 0; 
}
