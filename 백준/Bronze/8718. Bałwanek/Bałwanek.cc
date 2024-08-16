#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <map>
#include <deque>
#include <queue>

using namespace std;

int arr[201][201];

vector<long long> v;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, m, k = 0, sum = 0, cnt = 0, max = 0;
    string str, s;
    cin >> t >> k;

    v.push_back(7000 * k);
    v.push_back(3500 * k);
    v.push_back(1750 * k);

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] <= 1000 * t)
        {
            cout << v[i];
            return 0;
        }
    }
    cout << 0;

    return 0;
}
