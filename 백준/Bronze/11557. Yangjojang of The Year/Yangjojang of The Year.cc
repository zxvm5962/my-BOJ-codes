#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, k = 0;
    string str;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<pair<long long, string>> m;
        for (int i = 0; i < n; i++)
        {
            cin >> str >> k;
            m.push_back({k, str});
        }
        sort(m.begin(), m.end());
        cout << m[n - 1].second << '\n';
        m.clear();
    }
}