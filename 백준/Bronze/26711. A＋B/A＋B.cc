#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

string bigNum_Add(string a, string b) {

  long long res = 0, al = a.length(), bl = b.length();
  string c;

  for (long long i = 0; i < al || i < bl; i++) {
    if (i < al)
      res += a[al - i - 1] - '0';
    if (i < bl)
      res += b[bl - i - 1] - '0';

    c += (res % 10) + '0';
    res /= 10;
  }

  if (res)
    c += res + '0';
  reverse(c.begin(), c.end());

  return c;
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string a, b;
  cin >> a >> b;
  cout << bigNum_Add(a, b);

  return 0;
}
