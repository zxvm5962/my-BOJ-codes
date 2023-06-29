#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> v;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, o, x;
  cin >> n;
  while (n--) {
    cin >> o;
    if (o == 1) {
      cin >> x;
      v.push_back(x);
    } else if (o == 2) {
      if (!v.empty()) {
        cout << v.back() << "\n";
        v.pop_back();
      } else
        cout << -1 << "\n";
    } else if (o == 3)
      cout << v.size() << "\n";
    else if (o == 4)
      cout << v.empty() << "\n";
    else {
      if (!v.empty()) {
        cout << v.back() << "\n";
      } else
        cout << -1 << "\n";
    }
  }

  return 0;
}