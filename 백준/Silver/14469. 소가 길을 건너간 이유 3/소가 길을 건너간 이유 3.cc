#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <map>

using namespace std;

vector<pair<int, int>> v;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, m, k, sum = 0;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        v.push_back({n, m});
    }
    sort(v.begin(), v.end());
    int time = v[0].first;
    for (int i = 0; i < v.size(); i++)
    {
        if (time < v[i].first)
        {
            time = v[i].first;
        }
        time += v[i].second;
    }
    cout << time;

    return 0;
}
