#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <cstring>

using namespace std;

int N;

int solve(int sum, vector<pair<int, int>> &coins)
{
    bool dp[50001];

    memset(dp, false, sizeof(dp));

    dp[0] = true;

    if (sum % 2 != 0)
    {
        return 0;
    }

    sum /= 2;

    for (int i = 0; i < N; i++)
    {
        auto cur = coins[i];

        for (int k = sum; k >= 0; k--)
        {
            if (dp[k])
            {
                for (int j = 1; j <=cur.second; j++)
                {
                    if (k + cur.first * j > sum)
                    {
                        break;
                    }

                    dp[k + cur.first * j] = true;
                }
            }

            if (dp[sum])
            {
                return 1;
            }
        }
    }

    if (dp[sum])
    {
        return 1;
    }

    return 0;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, T = 3;

    while (T--)
    {
        cin >> N;

        vector<pair<int, int>> coins;
        int sum = 0;

        for (int i = 0; i < N; i++)
        {
            cin >> a >> b;

            coins.push_back({a, b});
            sum += a * b;
        }

        cout << solve(sum, coins) << "\n";
    }

    return 0;
}
