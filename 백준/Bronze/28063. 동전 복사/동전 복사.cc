#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> v;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, x, y, cnt;
  cin >> n;
  cin >> x >> y;
  if (n == 1) {
    cout << 0;
    return 0;
  }

  if (x == 1 && y == 1)
    cout << 2;
  else if (x == n && y == n)
    cout << 2;
  else if (x == 1 && y == n)
    cout << 2;
  else if (x == n && y== 1)
    cout << 2;
  else if (x == 1 || y == 1 || x == n || y == n)
    cout << 3;
  else
    cout << 4;

  return 0;
}