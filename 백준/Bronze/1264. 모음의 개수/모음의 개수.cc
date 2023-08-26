#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string s;
  while (1) {
    int cnt = 0;
    getline(cin, s);
    if (s[0] == '#')
      break;
    for (int i = 0; i < s.length(); i++) {
      if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' ||
          s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' ||
          s[i] == 'A' || s[i] == 'u' || s[i] == 'U')
        cnt++;
    }
    cout << cnt << '\n';
  }
  return 0;
}
