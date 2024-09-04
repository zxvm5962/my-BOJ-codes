#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, m, k = 0, cnt = 0, a, b;
    string str;
    cin >> n >> m;
    k = min(n, m);
    k *= 100;
    k /= 2;
    cout << k;
}