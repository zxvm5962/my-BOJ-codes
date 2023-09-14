#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath> 

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> v;
    int dp[100001] = {0};

    for (int i = 1; i < 400; i++)
    {
        if (pow(i, 2) <= 100000)
        {
            v.push_back(pow(i, 2));
        }
        else
        {
            break;
        }
    }
    for (int j = 1; j <= n; j++)
    {
        for (int i = 0; i < v.size(); i++)
        {
            if (dp[j] == 0)
            {
                dp[j] = dp[j - v[i]] + 1;
            }
            else
            {
                if (j - v[i] >= 0)
                {
                    dp[j] = min(dp[j - v[i]] + 1, dp[j]);
                }

            }
        }
    }
    cout << dp[n];

    return 0;
}
