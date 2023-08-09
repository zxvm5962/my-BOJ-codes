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
  if(str == "NLCS")
    cout << "North London Collegiate School";
  else if(str == "BHA")
    cout << "Branksome Hall Asia";
  else if(str == "KIS")
    cout << "Korea International School";
  else
    cout << "St. Johnsbury Academy";
  return 0;
}