#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  long long sum1 = 0, sum2 = 0;
  for (int i = 1; i <= n; i++) {
    sum1 += i;
  }
  cout << sum1 << '\n';
  for (int i = 1; i <= n; i++) {
    sum2 += pow(i, 3);
  }
  cout << sum2 << "\n" << sum2;

  return 0;
}