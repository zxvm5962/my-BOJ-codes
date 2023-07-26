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
  int cntj = 0, cnti = 0;
  string joi = "JOI", ioi = "IOI";
  for (int i = 0; i < str.length(); i++){
    if(str.substr(i,3) == joi)
      cntj++;
    if(str.substr(i,3) == ioi)
      cnti++;
  }
  cout << cntj << '\n' << cnti;
  return 0;
}
