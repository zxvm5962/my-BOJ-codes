#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, k = 0, cnt = 0;
    string str;
    for (int i = 0; i < 6; i++)
    {
        cin >> n;
        cnt += 5 * n;
    }
    cout << cnt;
}