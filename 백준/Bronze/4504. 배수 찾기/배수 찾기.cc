#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t, num;
  cin >> t;
  while (1) {
    cin >> num;
    if (num == 0)
      break;
    if (num % t == 0)
      printf("%d is a multiple of %d.\n", num, t);
    else
      printf("%d is NOT a multiple of %d.\n", num, t);
  }
  return 0;
}
