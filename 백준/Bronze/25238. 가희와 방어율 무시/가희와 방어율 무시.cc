#include <algorithm>
#include <iostream>

using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  float a, b;
  cin >> a >> b;
  a = a -  a * (b/100);
  if (a < 100)
    cout << 1;
  else
    cout << 0;
  return 0;
}
