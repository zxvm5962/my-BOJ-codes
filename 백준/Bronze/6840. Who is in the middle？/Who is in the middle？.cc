#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int arr[3] = {0};

  for(int i=0 ;i<3 ;i++){
    cin >> arr[i];
  }
  sort(arr,arr+3);
  
  cout << arr[1];
  
  return 0;
}