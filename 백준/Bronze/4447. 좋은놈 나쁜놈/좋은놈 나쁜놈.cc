#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, b, g;
  char s[50];
  cin.getline(s, 50, '\n');
  t = stoi(s);
  while (t--) {
    cin.getline(s, 50, '\n');
    b = 0, g = 0;
    for (int i = 0; i < strlen(s); i++) {
      if (s[i] == 'b' || s[i] == 'B')
        b++;
      if (s[i] == 'g' || s[i] == 'G')
        g++;
    }
    if (b > g)
      cout << s << " is A BADDY\n";
    else if (g > b)
      cout << s << " is GOOD\n";
    else
      cout << s << " is NEUTRAL\n";
  }

  return 0;
}