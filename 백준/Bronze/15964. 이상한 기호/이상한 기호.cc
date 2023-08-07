#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  long long n, k;
  cin >> n >> k;
  cout << (n+k) * (n-k);

  return 0;
}