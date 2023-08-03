#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string str;
  long long sum = 0;
  bool flag = true;
  cin >> str;
  for (int i = 0; i < str.length(); i++) {
    sum += (str[i] - '0');
    if (str[i] == '0')
      flag = false;
  }
  if (sum % 3 != 0)
    flag = true;
  
  if (flag == true)
    cout << -1;
  else {
    sort(str.begin(), str.end(), greater<int>());
    cout << str;
  }
  return 0;
}