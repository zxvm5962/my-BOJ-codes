#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<pair<int, string>> v;

    int t,n;
    string str;

    cin >> t;
    while (t--)
    {
        cin >> n;
        int p;
        for (int i = 0; i < n; i++)
        {
            cin >> p >> str;
            v.push_back({p,str});
        }
        sort(v.rbegin(),v.rend());
        cout << v[0].second << "\n";
        v.clear();
    }


    
    return 0;
}