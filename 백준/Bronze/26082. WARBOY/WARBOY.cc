#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<char> v, str;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int a, b, c;
  cin >> a >> b >> c;
  cout << (b/a)*3*c;

  return 0;
}