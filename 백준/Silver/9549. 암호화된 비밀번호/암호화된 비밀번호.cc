#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string a, b;
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> v(200, 0);
        vector<int> v2(200, 0);
        bool flag = false;
        cin >> a >> b;
        for (int i = 0; i < b.size(); i++)
            v[b[i]]++;

        int idx = 0;
        for (int i = 0; i < a.size(); i++)
        {
            v2[a[i]]++;
            if (i >= b.size())
            {
                v2[a[idx]]--;
                idx++;
            }
            if (i >= b.size() - 1)
            {
                int cnt = 0;
                for (int j = 'a'; j <= 'z'; j++)
                {
                    if (v[j] == v2[j] && v[j] != 0)
                        cnt += v[j];
                }
                if (cnt == b.size())
                {
                    flag = true;
                    break;
                }
            }
        }
        if (!flag)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}