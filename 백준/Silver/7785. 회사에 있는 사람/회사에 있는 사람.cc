#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  map<string, string, greater<string>> Mymap;
  int t;
  string people, status;
  cin >> t;
  while (t--) {
    cin >> people >> status;
    if (status == "leave")
      Mymap.erase(people);
    else
      Mymap.insert({people, status});
  }
  
  for(auto a : Mymap){
    cout << a.first << "\n";
  }
  return 0;
}
