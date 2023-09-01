#include <algorithm>
#include <cstring>
#include <iostream>
#include <map>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  map<string, int> m;

  string str, substr;
  int t, check;
  cin >> t;
  while (t--) {
    cin >> str;
    for (int i = 0; i < str.length(); i++) {
      if (str[i] == '.') {
        check = i;
        break;
      }
    }
    for (int i = check + 1; i < str.length(); i++) {
      substr += str[i];
    }
    if (m[substr] == 0)
      m.insert({substr, 0});
    m[substr]++;
    substr.clear();
  }
  for (auto a : m) {
    cout << a.first << ' ' << a.second << "\n";
  }

  return 0;
}
