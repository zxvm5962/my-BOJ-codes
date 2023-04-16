#include <stdio.h>
#define max(a, b) a > b ? a : b
int main() {
  int n, m, sum = 0;
  int num = 1, arr[10] = {0};
  int as[10] = {0}, bs[10] = {0};
  scanf("%d %d", &n, &m);
  arr[0] = 1;

  for (int i = 1; i < 10; i++) {
    num *= 2;
    arr[i] = num;
  }
  int ch = 9;
  while (n != 0) {
    if (n / arr[ch] != 0) {
      as[ch] = arr[ch];
      n -= (n / arr[ch]) * arr[ch];
    }
    ch--;
  }
  ch = 9;
  while (m != 0) {
    if (m / arr[ch] != 0) {
      bs[ch] = arr[ch];
      m -= (m / arr[ch]) * arr[ch];
    }
    ch--;
  }
  for (int i = 0; i < 10; i++) {
    if (as[i] != bs[i]) {
      sum += max(as[i], bs[i]);
    }
  }
  printf("%d", sum);
  return 0;
}