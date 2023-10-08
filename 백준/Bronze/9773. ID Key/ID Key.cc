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
    string str;
    cin >> t;
    while (t--)
    {
        int sum = 0, key;
        int last = 0;
        cin >> str;
        int len = str.length();
        for (int i = 0; i < len; i++)
        {
            sum += str[i] - '0';
        }
        for (int i = len - 3; i < len; i++)
        {
            last += str[i] - '0';
            last *= 10;
        }
        key = sum + last;
        if (key >= 10000)
        {
            string tmp = to_string(key);
            for (int i = 1; i < tmp.length(); i++)
            {
                cout << tmp[i];
            }
            cout << '\n';
        }
        else if (key < 1000)
        {
            key += 1000;
            cout << key;
            cout << '\n';
        }
        else{
            cout << key;
            cout << '\n';
        }

    }

    return 0;
}
