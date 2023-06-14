#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  string n,m;
  cin >> n >> m;
  if(m.length() <= n.length())
    cout << "go";
  else
    cout << "no";
  return 0;
}
