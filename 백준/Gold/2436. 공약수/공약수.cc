#include <algorithm>
#include <iostream>
#include <math.h>
using namespace std;

int gcd(int a, int b) {
  if (b == 0)
    return a;
  else
    return gcd(b, a % b);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, m, sum = 0;

  cin >> n >> m;
  m /= n;
  int i = sqrt(m);
  int j, min = 2e8;
  int mini, minj;
  while (i <= m) {
    if (m % i == 0) {
      j = m / i;
      if (min > i + j && gcd(i, j) == 1) {
        min = i + j;
        mini = i;
        minj = j;
      }
      i++;
    } else
      i++;
  }
  if (mini > minj)
    printf("%d %d", minj * n, mini * n);
  else
    printf("%d %d", mini * n, minj * n);
  return 0;
}
