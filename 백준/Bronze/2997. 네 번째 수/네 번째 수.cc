#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <map>

using namespace std;

vector<int> v;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, m, k, sum = 0;
    for (int i = 0; i < 3; i++)
    {
        cin >> n;
        v.push_back(n);
    }
    sort(v.begin(), v.end());

    m = min(v[1] - v[0], v[2] - v[1]);
    if (v[0] + m == v[1])
    {
        if (v[1] + m == v[2])
            cout << v[2] + m;
        else
            cout << v[1] + m;
    }
    else {
        cout << v[0] + m;
    }

    return 0;
}