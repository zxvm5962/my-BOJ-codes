#include <stdio.h>

int main() {
  int k, dir[6], len[6];
  int num[6] = {0},m_num=1,max1=0,max2=0,sum;
  scanf("%d", &k);
  for (int i = 0; i < 6; i++) {
    scanf("%d %d", &dir[i], &len[i]);
    if(dir[i]==1 || dir[i] ==2){
      if(max1<len[i])
        max1 = len[i];
    }
    else{
      if(max2<len[i])
        max2 = len[i];
    }
  }
  for(int i=0;i<4;i++){
    if(dir[i] == dir[i+2]){
      num[i] = len[i+1];
    }
    else if(dir[i+4] == dir[i]){
      num[i] = len[(i+5)%6];
      if(i+4==5)
        break;
    }
  }
  for(int i=0;i<6;i++){
    if(num[i]>0){
      m_num *= num[i];
    }
  }
  sum = (max1 * max2 - m_num) * k;
  printf("%d",sum);

  return 0;
}