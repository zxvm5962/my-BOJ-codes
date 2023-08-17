#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    cin >> str;
    int cnt = 0;

    for(int i=0 ;i<str.length();i++){
        cout << str[i];
        cnt += 1;
        if(cnt % 10 == 0){
            cout << "\n";
        }
    }

    return 0;
}