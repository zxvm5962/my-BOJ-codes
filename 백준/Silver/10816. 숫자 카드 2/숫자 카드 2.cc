#include <stdio.h>
int card[20000001] = {0};

int main(){
  int n,m,num,num1;
  scanf("%d",&n);
  for(int i=0; i<n ;i++){
    scanf("%d",&num);
    card[num + 10000000] ++;
  }
  scanf("%d",&m);
  for(int i=0; i<m ;i++){
    scanf("%d",&num1);
    printf("%d ",card[num1+10000000]);
  }
  return 0;
}