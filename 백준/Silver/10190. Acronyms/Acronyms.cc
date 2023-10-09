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

    int t, n;
    string key, str;
    cin >> t;
    while (t--)
    {
        string tmp;
        cin >> key >> n;
        cin.ignore();
        cout << key << '\n';
        while (n--)
        {
            getline(cin, str);
            tmp.push_back(str[0]);
            for (int i = 1; i < str.length(); i++)
            {
                if (str[i] >= 'A' && str[i] <= 'Z' && str[i-1] == ' ')
                {
                    tmp.push_back(str[i]);
                }
            }
            if (key.compare(tmp) == 0)
            {
                cout << str << '\n';
            }
            tmp.clear();
        }

    }

    return 0;
}
