#include <algorithm>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;
    cin >> a >> b;
    a -= a % 100;
    while (1)
    {
        if (a % b == 0)
            break;
        a++;
    }
    string str = to_string(a);

    cout << str.substr(str.length()-2);
    

    return 0;
}
