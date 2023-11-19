#include <algorithm>
#include <iostream>

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
        for (int i = 0; i < str.length(); i++){
            str[i] = tolower(str[i]);
        }
        cout << str << '\n';
    }

    return 0;
}
