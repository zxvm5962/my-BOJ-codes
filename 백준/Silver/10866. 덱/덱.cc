#include <deque>
#include <iostream>
#include <string>

using namespace std;

int main() {
  deque<int> dq;

  int n, m;
  string str;
  cin >> n;
  while (n--) {
    cin >> str;
    if (str == "push_back") {
      cin >> m;
      dq.push_back(m);
    } else if (str == "push_front") {
      cin >> m;
      dq.push_front(m);
    } else if (str == "pop_front") {
      if (dq.empty() == 1)
        cout << "-1\n";
      else {
        cout << dq.front() << "\n";
        dq.pop_front();
      }
    } else if (str == "pop_back") {
      if (dq.empty() == 1)
        cout << "-1\n";
      else {
        cout << dq.back() << "\n";
        dq.pop_back();
      }
    } else if (str == "size")
      cout << dq.size() << "\n";
    else if (str == "empty")
      cout << dq.empty() << "\n";
    else if (str == "front") {
      if (dq.empty() == 1)
        cout << "-1\n";
      else
        cout << dq.front() << "\n";
    } else {
      if (dq.empty() == 1)
        cout << "-1\n";
      else
        cout << dq.back() << "\n";
    }
  }

  return 0;
}