#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> v;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, can;
  long long result, sum = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> can;
    v.push_back(can);
    sum += can;
  }
  sort(v.begin(), v.end());

  if (sum % 2 == 0)
    cout << sum;
  else {
    for (int i = 0; i < n; i++) {
      if (v[i] % 2 == 1) {
        sum -= v[i];
        break;
      }
    }
    cout << sum;
  }

  return 0;
}