#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n >> m;

    vector<int> v;

    for (int i = 0; i < n + m; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(),v.end());
    
    for (auto a : v)
    {
        cout << a << ' ';
    }

    return 0;
}
