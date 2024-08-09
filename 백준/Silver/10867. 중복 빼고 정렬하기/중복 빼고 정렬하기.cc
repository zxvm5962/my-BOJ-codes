#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <map>

using namespace std;

vector<int> v(2001);

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
        cin >> m;
        v[m + 1000]++;
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > 0)
        {
            cout << i - 1000 << ' ';
        }
    }

    return 0;
}
