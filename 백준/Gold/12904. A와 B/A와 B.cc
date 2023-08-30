#include <algorithm>
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string ans, str;
    cin >> ans;
    cin >> str;

    int n = str.length();
    for (int i = n - 1; i >= ans.length(); i--)
    {
        if (str[i] == 'A')
            str.pop_back();
        else if (str[i] == 'B')
        {
            str.pop_back();
            reverse(str.begin(), str.end());
        }
    }
    if (str.compare(ans) == 0)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }

    return 0;
}
