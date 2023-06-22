#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>

using namespace std;

vector<pair<string, string>> v;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, m;
  string str1, str2;
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    cin >> str1 >> str2;
    v.push_back({str1, str2});
  }
  sort(v.begin(), v.end());
  string key;
  for (int i = 0; i < m; i++) {
    cin >> key;
    int start = 0, end = n - 1;
    int result;
    while (start <= end) {
      int mid = (start + end) / 2;
      if (key < v[mid].first)
        end = mid - 1;
      else if (key > v[mid].first)
        start = mid + 1;
      else {
        result = mid;
        break;
      }
    }
    cout << v[result].second << "\n";
  }

  return 0;
}
