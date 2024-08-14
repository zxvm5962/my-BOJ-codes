#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <map>
#include <deque>

using namespace std;

vector<long long> v;

int arr[201][201];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, m, k = 0, sum = 0, cnt = 0, max = 0;
    double a, b, c, d, e, f = 0;
    string str, s;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        v.push_back(n);
    }
    sort(v.begin(), v.end());

    cout << v[0] * v[t-1];

    return 0;
}
