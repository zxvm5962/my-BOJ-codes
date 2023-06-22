#include <algorithm>
#include <iostream>

using namespace std;

int coin[11];
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, m, sum = 0;
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    cin >> coin[i];
  }
  int i = n - 1, num;
  while (m > 0) {
    num = m/coin[i];
    m -= num * coin[i];
    sum += num;
    i--;
  }
  cout << sum;
  return 0;
}
