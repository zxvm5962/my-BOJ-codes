#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <map>

using namespace std;

vector<string> v;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    string str;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        v.push_back(str);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (v[i][j] == 'W')
                v[i][j] = 'B';
            else
                v[i][j] = 'W';
        }
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        for (int j = 0; j < m; j++)
        {
            if (str[j] != v[i][j])
                cnt++;
        }
    }
    cout << cnt;

    return 0;
}