#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> v;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t, a, b;
  cin >> t;
  while (t--) {
    cin >> a >> b;
    a = a % 10;
    b--;
    int temp = a;
    v.push_back(temp);
    for (int i = 1; i < 4; i++) {
      temp = ((temp % 10) * (a % 10)) % 10;
      v.push_back(temp);
    }
    if (v[b % 4] == 0)
      cout << 10 << "\n";
    else
      cout << v[b % 4] << "\n";
    v.clear();
  }

  return 0;
}