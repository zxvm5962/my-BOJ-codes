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

    if (dp[k] == 0)
        return -1;
    else
        return dp[k];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if (k == 0)
    {
        cout << 0;
        return 0;
    }
    sort(v.begin(), v.end());

    cout << solve(n, v, k);

    return 0;
}