#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  vector<int> v;
  cin >> t;
  while (t--) {
    int cnt = 7;
    int num, sum = 0, min = 101;
    while (cnt--) {
      cin >> num;
      if (num % 2 == 0) {
        v.push_back(num);
        sum += num;
        if (min > num)
          min = num;
      }
    }
    cout << sum << ' ' << min << "\n";
    v.clear();
  }
  return 0;
}
