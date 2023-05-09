#include <stdio.h>

long long gcd(long long a, long long b) {
  if (b == 0)
    return a;
  else
    return gcd(b, a % b);
}
int main() {
  long long n, m, min = 100000000, result1, result2;

  scanf("%lld %lld", &n, &m);

  m /= n;

  for (int i = 1; i <= 8000; i++) {
    if (m % i == 0) {
      long long j = m / i;
      if (gcd(i, j) == 1) {
        if (min > i + j) {
          min = i + j;
          result1 = i;
          result2 = j;
        }
      }
    }
  }
  printf("%lld %lld", result1 * n, result2 * n);
}