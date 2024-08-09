#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <map>

using namespace std;

vector<int> v(1001);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, m, k, sum = 0;
    cin >> n;
    v[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        v[i] = v[i - 1] + (i + 1) * i * 3 / 2;
    }
    cout << v[n];

    return 0;
}

// 01 11 02 12 22 03 13 23 33