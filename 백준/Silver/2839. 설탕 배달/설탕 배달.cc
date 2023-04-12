#include <stdio.h>
int main() {
  int num, n, result[2];
  scanf("%d", &num);
  n = num;
  result[0] = num / 5;
  num %= 5;
  while ((n - result[0] * 5) % 3 != 0) {
    if (num > n || result[0] == 0)
      break;    
    num += 5;
    result[0]--;

  }
  result[1] = num / 3;
  
  if(result[0] * 5 + result[1] * 3 == n){
    printf("%d", result[0] + result[1]);
  }
  else printf("-1");

  return 0;
}