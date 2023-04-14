#include <stdio.h>

long long fsum[1000001] = {0}, gsum[1000001] = {0};

int main() {
  int t, n;
  long long sum = 0;
  for (int i = 1; i < 1000001; i++) {
    for (int j = 1; i * j < 1000001; j++) {
      fsum[i*j] += i;
    }
  } 

  for (int i = 1; i < 1000001; i++) {
    sum += fsum[i];
    gsum[i] = sum;
  }
  
  scanf("%d", &t);
  for (int i = 0; i < t; i++) {
    scanf("%d", &n);
    printf("%lld\n", gsum[n]);
  }

  return 0;
}