#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void*a, const void* b){
  return strcmp((char *)a,(char *)b);
}

int main() {
  int m, n, cnt =0;
  scanf("%d %d", &n,&m);
  char man[n+m][21],result[500001][21];

  for(int i=0;i<n+m;i++){
    scanf("%s",man[i]);
  }
  qsort(man,sizeof(man)/sizeof(man[0]),sizeof(man[0]),compare);

  for(int i=0;i<n+m-1;i++){
    if(strcmp(man[i],man[i+1]) == 0)
      cnt++;
  }
  printf("%d\n",cnt);
  for(int i=0;i<n+m-1;i++){
    if(strcmp(man[i],man[i+1]) == 0)
      printf("%s\n",man[i]);
  }
  return 0;
}