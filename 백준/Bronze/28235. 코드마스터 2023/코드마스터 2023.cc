#include <algorithm>
#include <iostream>

using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string a;
  cin >> a;
  if (a[0] == 'S')
    cout << "HIGHSCHOOL";
  else if (a[0] == 'C')
    cout << "MASTER";
  else if (a[0] == '2')
    cout << "0611";
  else
    cout << "CONTEST";

  return 0;
}
