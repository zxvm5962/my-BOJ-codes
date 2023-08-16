#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int num, sum = 0, min = 101;
  bool flag = false;
  for(int i=0; i<7;i++){
    cin >> num;
    if(num %2 == 1){
      flag = true;
      sum += num;
      if(min > num)
        min = num;
    }
  }
  if(flag == false)
    cout << -1;
  else{
    cout << sum << "\n" << min;
  }
  return 0;
}