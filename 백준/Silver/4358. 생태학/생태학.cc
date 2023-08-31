#include <algorithm>
#include <cstring>
#include <iostream>
#include <map>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  map<string, float> mymap;

  string tree;

  int cnt = 0;
  while (getline(cin, tree)) {
    if (mymap[tree] == 0)
      mymap.insert({tree, 0});

    mymap[tree]++;
    cnt++;
  }

  for (auto a : mymap) {
    cout << a.first << ' ';
    cout << fixed;
    cout.precision(4);
    cout << 100 * (a.second / cnt) << "\n";
  }

  return 0;
}
