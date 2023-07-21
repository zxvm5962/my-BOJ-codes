#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string str[5];

  int max = 0;
  for (int i = 0; i < 5; i++) {
    cin >> str[i];
    if (max < str[i].length()) {
      max = str[i].length();
    }
  }
  int k = 0;
  while (k < max) {
    for (int i = 0; i < 5; i++) {
      if (k < str[i].length())
        cout << str[i][k];
    }
    k++;
  }
  return 0;
}
