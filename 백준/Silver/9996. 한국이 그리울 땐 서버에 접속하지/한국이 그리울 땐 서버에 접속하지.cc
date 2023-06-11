#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  string list;
  string ans;

  int n, point, cnt = 0;
  cin >> n >> ans;
  for (int i = 0; i < ans.length(); i++) {
    if (ans[i] == '*') {
      point = i;
      break;
    }
  }

  for (int i = 0; i < n; i++) {
    cnt = 0;
    cin >> list;
    if (ans.length() - 1 > list.length()) {
      cout << "NE\n";
      continue;
    }

    for (int i = 0; i < point; i++) {
      if (ans[i] == list[i])
        cnt++;
    }
    int k = 1;
    for (int i = ans.length() - 1; i > point; i--) {
      if (ans[i] == list[list.length() - k])
        cnt++;
      k++;
    }
    if (cnt == ans.length() - 1)
      cout << "DA\n";
    else
      cout << "NE\n";
  }

  return 0;
}
