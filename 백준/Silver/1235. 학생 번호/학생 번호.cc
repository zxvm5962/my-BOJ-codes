#include <algorithm>
#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    string str;
    vector<string> v;

    while (t--)
    {
        cin >> str;
        v.push_back(str);
    }

    int cnt = 0;
    while (1)
    {
        map<string, int> m;
        cnt++;
        for (int i = 0; i < v.size(); i++)
        {
            string sub = v[i].substr(v[i].length() - cnt, cnt);
            if (m[sub] != 1)
                m.insert({sub, 1});
            else
                break;
        }
        if (m.size() == v.size())
        {
            cout << cnt;
            break;
        }
    }
    return 0;
}
