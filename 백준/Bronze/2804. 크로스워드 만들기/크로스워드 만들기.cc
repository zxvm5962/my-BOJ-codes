#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string a, b;
  int ck1 = 0, ck2 = 0;
  bool flag = true;
  cin >> a >> b;
  for (int i = 0; i < a.length() && flag == true; i++) {
    for (int j = 0; j < b.length(); j++) {
      if (a[i] == b[j]) {
        ck1 = i;
        ck2 = j;
        flag = false;
        break;
      }
    }
  }

  for (int i = 0; i < b.length(); i++) {
    if (i == ck2) 
      cout << a << '\n';
    else {
      for (int j = 0; j < ck1; j++) {
        cout << '.';
      }
      cout << b[i];
      for (int j = ck1 + 1; j < a.length(); j++) {
        cout << '.';
      }
      cout << '\n';
    }
  }

  return 0;
}
