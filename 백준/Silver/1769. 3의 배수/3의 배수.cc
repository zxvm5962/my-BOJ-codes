#include <stdio.h>
#include <string.h>

int main() {
  char num[1000001];
  int sum = 0, sum2, cnt = 0;
  scanf("%s", num);
  for (int i = 0; i < strlen(num); i++) {
    if (num[i] >= 48 && num[i] < 58) {
      sum += num[i] - 48;
    }
  }
  if(sum<10){
    goto fin;
  }
  cnt++;
  while (1) {
    if (sum > 9) {
      sum2 =0;
      while (sum != 0) {
        sum2 += sum % 10;
        sum /= 10;
      }
      sum = sum2;
      cnt++;
    }
    else
      break;
  }
  fin:
  printf("%d\n",cnt);
  if(sum%3==0 && sum !=0)
    printf("YES");
  else
    printf("NO");

  return 0;
}