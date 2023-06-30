#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<pair<int, int>> v;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t, n, num1, num2;
  cin >> t;
  while (t--) {
    cin >> n;
    for (int i = 0; i < n; i++) {
      cin >> num1 >> num2;
      v.push_back(pair<int, int>(num1, num2));
    }
    sort(v.begin(), v.end());
    int min = v[0].second, cnt = 1;
    for (int i = 1; i < n; i++) {
      if(min < v[i].second)
        continue;
      else{
        min = v[i].second;
        cnt ++;
      }
    }
    cout << cnt << "\n";
    v.clear();
  }

  return 0;
}