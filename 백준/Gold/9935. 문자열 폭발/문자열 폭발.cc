#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string str, test;
  vector<char> v;
  string bomb;
  cin >> str >> bomb;

  int i = 0;
  int slen = str.length(), len = bomb.length();
  while (i < slen) {
    v.push_back(str[i]);

    if (v.size() >= len) {
      int cnt = 0, k = 0;
      for (int j = v.size() - len; j < v.size(); j++) {
        if (v[j] == bomb[k])
          cnt++;
        k++;
      }
      if (cnt == len) {
        for (int j = 0; j < len; j++) {
          v.pop_back();
        }
      }
    }
    i++;
  }

  if (v.size() == 0) {
    cout << "FRULA";
  }

  else {
    for (int j = 0; j < v.size(); j++) {
      cout << v[j];
    }
  }

  return 0;
}