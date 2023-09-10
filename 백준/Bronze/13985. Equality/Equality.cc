#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    char a,b,plus,equal,c;
    cin >> a >> plus >> b >> equal >> c;
    if(a + b - '0' == c){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

    return 0;
}