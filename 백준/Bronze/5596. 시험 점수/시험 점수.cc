#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int s = 0, t = 0, num;
  for (int j = 0; j < 4; j++) {
    cin >> num;
    s += num;
  }
  for (int j = 0; j < 4; j++) {
    cin >> num;
    t += num;
  }
  cout << max(s,t);

  return 0;
}