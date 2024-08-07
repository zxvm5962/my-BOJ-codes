#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <map>

using namespace std;

int solve(int n, vector<pair<int, int>> &v, int k)
{
    vector<vector<int>> dp(n + 1, vector<int>(k + 1, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            dp[i + 1][j] = max(dp[i + 1][j], dp[i][j]);

            if (j - v[i].first >= 0)
            {
                dp[i+1][j] = max(dp[i+1][j], dp[i][j-v[i].first] + v[i].second);
            }
        }
    }
    return dp[n][k];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> p(n);

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i].first >> p[i].second;
        sum += p[i].second;
    }

    cout << sum - solve(n, p, k);

    return 0;
}