#include <bits/stdc++.h>

using namespace std;

vector<int> v;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, m, k = 0, cnt = 0, a, b, maxV = 0;
    string str;
    cin >> n >> m >> k;
    a = n;
    b = 0;
    while (a > b)
    {
        a += m;
        b += k;
        cnt++;
    }
    cout << cnt;
}