#include <algorithm>
#include <iostream>

using namespace std;

int arr[100];

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string str;
  int cnt = 0;
  cin >> str;
  for (int i = 0; i < str.length(); i++) {
    arr[str[i]]++;
  }
  for (int i = 'A'; i <= 'Z'; i++) {
    if (arr[i] % 2 == 1)
      cnt++;
  }
  if (cnt > 1) {
    cout << "I'm Sorry Hansoo";
  } 
  else {
    for (int i = 'A'; i <= 'Z'; i++) {
      if (arr[i] > 0) {
        for (int j = 0; j < arr[i] / 2; j++) {
          printf("%c", i);
        }
      }
    }
    for (int i = 'A'; i <= 'Z'; i++) {
      if (arr[i] % 2 == 1) {
        printf("%c", i);
      }
    }
    for (int i = 'Z'; i >= 'A'; i--) {
      if (arr[i] > 0) {
        for (int j = 0; j < arr[i] / 2; j++) {
          printf("%c", i);
        }
      }
    }
  }

  return 0;
}
