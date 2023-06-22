#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> v;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, num;

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> num;
    v.push_back(num);
  }
  sort(v.begin(), v.end());

  for (int i = 0; i < n; i++) {
    cout << v[i] << "\n";
  }

  return 0;
}
