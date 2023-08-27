#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  string str;
  cin >> n;
  while(n--){
    cin >> str;
    cout << str[0]+str[2] - 2 * '0' << "\n";
  }
  return 0;
}
