#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int e, s, m;

  cin >> e >> s >> m;
  e %= 15;
  s %= 28;
  m %= 19;
  for (int i = 1; i <= 7980; i++) {
    if (i % 15 == e && i % 28 == s && i % 19 == m) {
      printf("%d", i);
      break;
    }
  }
  return 0;
}
