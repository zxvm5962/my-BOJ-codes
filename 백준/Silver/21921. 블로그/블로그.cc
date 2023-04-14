#include <stdio.h>

int main() {
  int n, x, people;
  long long sum = 0, psum[250001] = {0}, max = 0, bomi,check =0;
  scanf("%d %d", &n, &x);
  for (int i = 1; i <= n; i++) {
    scanf("%d", &people);
    sum += people;
    psum[i] = sum;
  }

  for (int i = 0; i <= n - x; i++) {
    bomi = psum[i + x] - psum[i];
    if (max < bomi) {
      max = bomi;
    }
  }
  for (int i = 0; i <= n - x; i++) {
    bomi = psum[i + x] - psum[i];
    if (max == bomi) {
      check ++;
    }
  }
  if (max == 0) {
    printf("SAD");
    return 0;
  } 
  else {
    printf("%lld\n%lld",max,check);
  }

  return 0;
}