#include <algorithm>
#include <iostream>
#include <queue>

using namespace std;

priority_queue<int> pq;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, m, num;

  cin >> n;
  while (n--) {
    cin >> m;
    if (m == 0) {
      if (pq.empty())
        cout << '0' << "\n";
      else {
        cout << pq.top() << "\n";
        if (!pq.empty())
          pq.pop();
      }
    }
    else
      pq.push(m);
  }

  return 0;
}
