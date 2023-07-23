#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  
  int num, sum = 0;
  while(cin >> num){
    sum += num;
  }
  cout << sum;
  
  return 0;
}
