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
    cin >> n;
    cin >> str;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'j')
            cnt += 2;
        else if (str[i] == 'o')
            cnt += 1;
        else
            cnt += 2;
    }
    cout << cnt;
}