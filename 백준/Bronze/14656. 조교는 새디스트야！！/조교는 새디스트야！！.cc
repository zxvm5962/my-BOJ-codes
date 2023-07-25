#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, cnt = 0;
  cin >> t;
  for (int i = 1; i <= t; i++) {
    int num;
    cin >> num;
    if (num != i)
      cnt++;
  }
  cout << cnt;

  return 0;
}
