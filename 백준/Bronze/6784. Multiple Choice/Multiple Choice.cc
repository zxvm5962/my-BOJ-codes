#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <map>
#include <deque>

using namespace std;

int arr[201][201];

vector<string> v;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, m, k = 0, sum = 0, cnt = 0;
    double a, b, c, d, e, f = 0;
    bool flag = false;
    string str, s;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> s;
        v.push_back(s);
    }
    for (int i = 0; i < t; i++)
    {
        cin >> s;
        if (v[i] == s)
            cnt++;
    }

    cout << cnt;
    return 0;
}
