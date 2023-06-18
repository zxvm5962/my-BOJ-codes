#include <algorithm>
#include <iostream>

using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int min = 101, num, sum = 0;
  for (int i = 0; i < 4; i++) {
    cin >> num;
    sum += num;
    if (min > num)
      min = num;
  }
  sum -= min;
  min = 101;
  for (int i = 0; i < 2; i++) {
    cin >> num;
    sum += num;
    if (min > num)
      min = num;
  }
  sum -= min;
  cout << sum;

  return 0;
}
