#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  long l = 1, r = 1, cnt = 1;

  while (r!=n) {
    long long left = l * (l - 1) / 2, right = r * (r+1) / 2;
    if (right - left == n) {
      cnt++;
      r++;
    }
    else if (right - left <n){
      r++;
    }
    else if (right - left >n){
      l++;
    }
  }
  printf("%ld",cnt);

  return 0;
}