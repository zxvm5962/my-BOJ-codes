#include <stdio.h>

int main() {
  int n, m, check, i = 1, t,num,result;
  scanf("%d", &t);
  for (int i = 0; i  < t; i++) {
    scanf("%d %d", &n, &m);
    for(int j= 1 ; j<=n; j++){
      if(n%j ==0 && m%j ==0)
        check =j;
    }
    num = check;
    result = (n/check) * m;
    printf("%d\n",result);
  }
  return 0;
}