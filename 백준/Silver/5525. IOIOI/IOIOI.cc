#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, m;
  cin >> n >> m;
  string ioi = "I", add = "OI";
  for (int i = 0; i < n; i++) {
    ioi += add;
  }

  string str;
  int cnt = 0;
  cin >> str;
  for (int i = 0; i <= m - ioi.length(); i++) {
    string CompStr = str.substr(i, ioi.length());
    if (CompStr == ioi)
      cnt++;
  }
  cout << cnt;
  
  return 0;
}
