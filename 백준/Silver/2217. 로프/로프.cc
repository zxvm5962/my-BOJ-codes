#include <stdio.h>
#include <stdlib.h>

int compare(const void*a, const void*b){
  return *(int *)a - *(int *)b;
}

int main() {
  int n,len[100002] = {0},max=0,result;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d",&len[i]);
  }
  if(n==1){
    printf("%d",len[0]);
    return 0;
  }
  
  qsort(len,n,sizeof(int),compare);

  for(int i=0;i<n-1;i++){
    if(len[i] * (n-i) < len[i+1] * (n -i -1)){
      result = len[i+1] * (n-i-1);
    }
    else
      result = len[i] * (n-i);
    if( max < result)
      max = result;
  }
  printf("%d",max);

  return 0;
}
