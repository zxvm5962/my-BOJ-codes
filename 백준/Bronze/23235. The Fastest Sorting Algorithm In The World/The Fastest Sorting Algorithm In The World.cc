#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n = 1;
  string k;
  while (1) {
    getline(cin, k);
    if (k[0] == '0')
      break;
    printf("Case %d: Sorting... done!\n",n);
    n++;
  }

  return 0;
}