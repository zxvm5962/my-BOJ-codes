#include <iostream>
#include <queue>
#include <string>

using namespace std;
queue<int> q;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, m;
  cin >> n;
  while (1) {
    cin >> m;
    if (m == -1)
      break;
    if (m != 0) {
      if (q.size() == n)
        continue;
      else {
        q.push(m);
      }
    }
    else
      q.pop();
  }
  if (q.empty() == 1)
    cout << "empty";
  else {
    while (!q.empty()){
      cout << q.front() << ' ';
      q.pop();
    }
  }

  return 0;
}