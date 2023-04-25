#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) { return *(int *)b - *(int *)a; }

int main() {
  int n,num[15] = {0},i=0;
  scanf("%d",&n);

  while(n != 0){
    num[i] = n%10;
    n/=10;
    i++;
  }

  qsort(num,i,sizeof(int),compare);

  for(int j=0;j<i;j++){
    printf("%d",num[j]);
  }

  return 0;
}

