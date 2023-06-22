#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int arr[100001];
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, m, num, sum = 0;
  cin >> n >> m;
  for (int i = 1; i <= n; i++) {
    cin >> num;
    sum += num;
    arr[i]  = sum;
  }
  int s, e;
  for (int i = 0; i < m; i++) {
    cin >> s >> e;
    int result = arr[e] - arr[s-1];
    cout << result << "\n";
  }
  

  return 0;
}
