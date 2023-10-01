#include <algorithm>
#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    string str;
    while (t--)
    {
        cin >> str;
        if(str.length() < 6 || str.length() > 9 ){
            cout << "no\n";
        }
        else{
            cout << "yes\n";
        }
    }
    return 0;
}
