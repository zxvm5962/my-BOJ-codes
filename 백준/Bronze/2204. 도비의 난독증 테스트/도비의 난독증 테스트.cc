#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    while (1)
    {
        vector<pair<string,int>> v;
        vector<string> v2;
        string str, tmp;
        cin >> n;
        if (n == 0)
            break;
        
        for (int i = 0; i < n; i++)
        {
            cin >> str;
            tmp = str;
            for (int j = 0; j < str.length(); j++)
            {
                tmp[j] = tolower(str[j]);
            }
            v2.push_back(str);
            v.push_back({tmp,i});
        }
        sort(v.begin(),v.end());
        cout << v2[v[0].second] << '\n';
        v2.clear();
        v.clear();
    }

    return 0;
}
