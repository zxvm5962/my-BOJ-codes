#include <stdio.h>

int main() {
  int n,m,fi,la,list[100001] = {0};
  long psum[100001] = {0},sum = 0, sum2;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &list[i]);
    sum += list[i];
    psum[i] = sum;
  }  

  scanf("%d",&m);
  for(int i=0;i<m;i++){
    scanf("%d %d",&fi,&la);
    sum2 = psum[la-1] - psum[fi-1] + list[fi-1]; 
    printf("%ld\n",sum2);
  }
  
  return 0;
}