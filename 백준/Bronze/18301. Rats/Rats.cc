#include <algorithm>
#include <iostream>

using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int a, b, c;
  cin >> a >> b >> c;
  printf("%d",(a + 1) * (b + 1) / (c + 1) - 1);
  return 0;
}
