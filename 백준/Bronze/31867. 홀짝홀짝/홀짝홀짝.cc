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
    cin >> n >> str;
    for (int i = 0; i < n; i++)
    {
        if (str[i] % 2 == 1)
            cnt++;
        else
            k++;
    }
    if (cnt > k)
        cout << 1;
    else if (cnt < k)
        cout << 0;
    else
        cout << -1;
}