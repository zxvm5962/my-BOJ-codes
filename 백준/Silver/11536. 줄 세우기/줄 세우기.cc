#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  vector<string> v1, v2;
  string arr[21];
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    v1.push_back(arr[i]);
    v2.push_back(arr[i]);
  }

  int cnt1 = 0, cnt2 = 0;
  sort(v1.begin(), v1.end(), greater<string>());
  sort(v2.begin(), v2.end(), less<string>());

  for (int i = 0; i < n; i++) {
    if (v1[i] == arr[i])
      cnt1++;
    if (v2[i] == arr[i])
      cnt2++;
  }
  if (cnt1 == n)
    cout << "DECREASING";
  else if (cnt2 == n)
    cout << "INCREASING";
  else
    cout << "NEITHER";

  return 0;
}
