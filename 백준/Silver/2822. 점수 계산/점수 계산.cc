#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num;
    vector<pair<int,int>> v;
    vector<int> v2;

    for (int i = 1; i <= 8; i++)
    {
        cin >> num;
        v.push_back({num,i});
    }

    sort(v.begin(),v.end());

    int sum = 0;
    for (int i = 7; i > 2; i--)
    {
        sum += v[i].first;
        v2.push_back(v[i].second);
    }
    cout << sum << '\n';
    sort(v2.begin(),v2.end());

    for (int i = 0; i < 5; i++)
    {
        cout << v2[i] << ' ';
    }
    
    

    return 0;
}
