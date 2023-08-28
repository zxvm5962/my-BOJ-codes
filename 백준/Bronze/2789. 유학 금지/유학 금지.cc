#include <algorithm>
#include <cstring>
#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string str;
  string rmv = "CAMBRIDGE";

  cin >> str;
  for (int i = 0; i < 9; i++) {
    str.erase(remove(str.begin(), str.end(), rmv[i]), str.end());
  }
  cout << str;

  return 0;
}
