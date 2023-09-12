#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    map<string, int> m;
    string k, v;
    int n;
    cin >> n;
    m.insert({"ChongChong", 1});

    while (n--)
    {
        cin >> k >> v;
        if (m[v] == 1 || m[k] == 1)
        {
            m[v] = 1, m[k] = 1;
        }
    }

    int cnt = 0;
    for (auto iter : m)
    {
        if (iter.second == 1)
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
