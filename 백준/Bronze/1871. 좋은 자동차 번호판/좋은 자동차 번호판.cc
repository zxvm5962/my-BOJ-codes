#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    string str;
    int num;
    cin >> str;
    int sum = 0;
    for (int i = 0; i < 3; i++) {
      sum += (str[i] - 'A') * pow(26, 2 - i);
    }
    reverse(begin(str), end(str));
    reverse(begin(str), begin(str) + 4);
    num = stoi(str);
    if (abs(sum - num) <= 100)
      cout << "nice" << '\n';
    else
      cout << "not nice" << '\n';
  }
  return 0;
}
