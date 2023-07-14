#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  string str;

  cin >> str;

  for(int i=0; i<str.length();i++){
    if(str[i] > 96)
      str[i] -= 32;

    else
      str[i] += 32;
  }
  cout << str;

  return 0;
}
