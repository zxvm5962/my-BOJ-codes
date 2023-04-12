#include <stdio.h>

int main() {
  int n,k,max= -100000000,total;
  int num[100001],sum[100001] = {0};
  scanf("%d %d",&n,&k);
  for(int i=0;i<n;i++){
    scanf("%d",&num[i]);
  }
  sum[0] = num[0];
  for(int i=0;i<n-1;i++){
    sum[i+1] = sum [i] + num[i+1];
  }
  for(int i=0;i<=n-k;i++){
    total = sum[i+k-1] - sum[i] + num[i];
    if(max<total)
      max = total;
  }
  printf("%d",max);
  
  return 0;
}