#include <stdio.h>

int main() {
  int n,m,num,arr[100001] = {0};
  long sum[100001] = {0};
  scanf("%d %d",&n,&m);
  for(int i=0;i<n;i++){
    scanf("%d",&num);
    arr[i] = num;
  }
  sum[0] = arr[0];
  for (int i=0;i<n;i++){
    sum[i+1] = sum[i] + arr[i+1];
  }
  
  int range1,range2;
  long result;
  for(int i=0;i<m;i++){
    scanf("%d %d",&range1,&range2);
    result = sum[range2-1] - sum[range1-1] + arr[range1-1];
    printf("%ld\n",result);
  }
  
  return 0;
}