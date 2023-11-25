#include <algorithm>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    while (1)
    {
        getline(cin, str);
        if(str.compare("END") == 0){
            break;
        }
        reverse(str.begin(), str.end());
        cout << str << '\n';
    }
    return 0;
}
