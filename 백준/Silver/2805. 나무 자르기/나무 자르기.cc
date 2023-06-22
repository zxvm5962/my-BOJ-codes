#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> v;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, m, num;
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    cin >> num;
    v.push_back(num);
  }
  sort(v.begin(), v.end());

  long long sum = 0, result;
  int start = 0, end = v[n - 1], mid;
  while (start <= end) {
    mid = (start + end) / 2;
    sum = 0;
    for (int i = 0; i < n; i++) {
      if (v[i] - mid > 0)
        sum += (v[i] - mid);
    }
    if (sum > m) {
      start = mid + 1;
      result = mid;
    } else if (sum < m)
      end = mid - 1;
    else {
      result = mid;
      break;
    }
  }
  cout << result;

  return 0;
}
