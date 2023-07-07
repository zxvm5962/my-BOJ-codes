#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, num, sum = 0;
  cin >> n;
  while(n--){
    cin >> num;
    sum += num;
  }
  cout << sum;

  return 0;
}
