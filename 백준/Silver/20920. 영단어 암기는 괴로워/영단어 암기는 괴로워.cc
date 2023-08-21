#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

bool cmp(const pair<string, int> &a, const pair<string, int> &b) {
  if (a.second == b.second) {
    if (a.first.length() == b.first.length())
      return a.first < b.first;
    return a.first.length() > b.first.length();
  }
  return a.second > b.second;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  map<string, int> m1;

  int n, m;
  string word;
  cin >> n >> m;

  while (n--) {
    cin >> word;
    if (word.length() >= m)
      m1[word]++;
  }

  vector<pair<string, int>> v(m1.begin(), m1.end());

  sort(v.begin(), v.end(), cmp);

  for (auto &a : v) {
    cout << a.first << "\n";
  }

  return 0;
}


