#include <bits/stdc++.h>

using namespace std;

vector<int> v;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, m, k = 0, cnt = 0, a, b;
    string str;
    for (int i = 0; i < 3; i++)
    {
        cin >> n;
        v.push_back(n);
    }
    sort(v.begin(), v.end());
    if (v[0] + v[1] == v[2])
        cout << 1;
    else if (v[0] * v[1] == v[2])
        cout << 2;
    else
        cout << 3;
}