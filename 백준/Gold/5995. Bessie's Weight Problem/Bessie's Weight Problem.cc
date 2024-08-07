#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <map>

using namespace std;

int dp[100001];

int solve(int n, vector<int> &v, int k)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = k + 1; j >= 0; j--)
        {
            if (dp[j] > 0)
            {
                if (dp[j + v[i]] > 0)
                    dp[j + v[i]] = min(dp[j + v[i]], dp[j] + 1);
                else
                    dp[j + v[i]] = dp[j] + 1;
            }
        }
        dp[v[i]] = 1;
    }
    for (int i = k; i > 0; i--)
    {
        if (dp[i] > 0)
            return i;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin >> k >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    cout << solve(n, v, k);

    return 0;
}