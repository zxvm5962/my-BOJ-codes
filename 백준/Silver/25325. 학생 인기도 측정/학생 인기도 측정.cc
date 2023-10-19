#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
#include <cstring>
using namespace std;

int cmp(pair<string, int> a, pair<string, int> b)
{
    if(a.second == b.second){
        return a.first < b.first;
    }

    return a.second > b.second;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    string str;
    map<string, int> m;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        m.insert({str, 0});
    }
    while (cin >> str)
    {
        m[str]++;
    }
    vector<pair<string, int>> v(m.begin(), m.end());

    sort(v.begin(),v.end(),cmp);

    for (auto a : v)
    {
        cout << a.first << ' ' << a.second << '\n';
    }

    return 0;
}
