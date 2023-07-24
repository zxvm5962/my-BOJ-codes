#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  
  int t;
  cin >> t;
  for(int i=1; i<=t; i++){
    int sum = 0;
    int num1, num2;
    cin >> num1 >> num2;
    sum += num1;
    sum += num2;
    printf("Case %d: %d\n",i,sum);
  }
  
  return 0;
}
