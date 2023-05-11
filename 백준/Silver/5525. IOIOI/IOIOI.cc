#include <stdio.h>
#include <string.h>

char str[1000001];
char io[1000002] = {0};
int main() {
  int n,m,result = 0;
  unsigned long cnt;
  io[0] = 'I';
  scanf("%d %d",&n,&m);
  for(int i=1;i<2*n;i+=2){
    io[i] = 'O';
    io[i+1] = 'I';
  }
  scanf("%s",str);

  for(int i=0;i<=strlen(str)-strlen(io);i++){
    cnt = 0;
    for(int j=0;j<strlen(io);j++){
      if(str[i+j] == io[j])
        cnt++;
    }
    if(cnt == strlen(io))
      result++;
  }
  printf("%d",result);
  
  return 0;
}

