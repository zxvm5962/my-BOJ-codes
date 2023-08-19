#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int a, b, c;
  int sum1 = 0, sum2 = 0;
  cin >> a >> b >> c;
  sum1 += 3 * a + 20 * b + 120 * c;
  cin >> a >> b >> c;
  sum2 += 3 * a + 20 * b + 120 * c;

  if(sum1 > sum2)
    cout << "Max";
  else if(sum2 > sum1)
    cout << "Mel";
  else
    cout << "Draw";
  

  return 0;
}