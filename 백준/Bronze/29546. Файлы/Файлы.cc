#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  string str[1001];

  for (int i = 0; i < n; i++) {
    cin >> str[i];
  }

  int t;
  cin >> t;
  int st, ed;
  while (t--) {
    cin >> st >> ed;
    for (int i = st - 1; i < ed; i++) {
      cout << str[i] << '\n';
    }
  }

  return 0;
}
