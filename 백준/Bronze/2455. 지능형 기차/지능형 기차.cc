#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int in, out, max = 0, now = 0;
  for (int i = 0; i < 4; i++) {
    cin >> out >> in;
    now += in - out;
    if (max < now)
      max = now;
  }
  cout << max;
  return 0;
}
