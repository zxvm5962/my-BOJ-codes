#include <stdio.h>
#include <stdlib.h>

int main() {
  long long n, m, num;
  long cnt = 0;
  int* arr = (int*) malloc(sizeof(int) *10000001);
  
  scanf("%lld %lld", &n, &m);
  arr[0] = 1;
  arr[1] = 1;
  for (long i = 2; i <= 5000001; i++) {
    for (long j = 2; i * j <= 10000000; j++) {
      arr[i * j] = 1;
    }
  }

  for (long i = 2; i <= 10000000; i++) {
    num = i;
    if (arr[i] == 0) {
      while(num <= m/i){
        num *= i;
        if (num <= m && num>= n) {
          cnt++;
        }
      }
    }
  }
  printf("%ld",cnt);
  
  free(arr);
  return 0;
}