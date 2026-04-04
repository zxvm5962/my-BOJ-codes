#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int T, N;

const int MAX = 100001;
const int INF = 1e9;

vector<vector<int>> cookies;
int dp[2][MAX];

void solve()
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            dp[i][j] = INF;
        }
    }

    dp[0][0] = 0;

    for (int k = 0; k < N; k++)
    {
        int cur = k % 2;
        int nxt = 1 - cur;

        for (int j = 0; j < MAX; j++)
        {
            dp[nxt][j] = INF;
        }

        for (int j = 0; j < MAX; j++)
        {
            if (dp[cur][j] == INF)
                continue;

            if (j + cookies[k][0] < MAX)
            {
                dp[nxt][j + cookies[k][0]] =
                    min(dp[nxt][j + cookies[k][0]], dp[cur][j]);
            }

            dp[nxt][j] =
                min(dp[nxt][j], dp[cur][j] + cookies[k][1]);
        }
    }

    int last = N % 2;
    int res = INF;

    for (int i = 0; i < MAX; i++)
    {
        if (dp[last][i] == INF)
            continue;
        res = min(res, max(i, dp[last][i]));
    }

    cout << res << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> T;
    while (T--)
    {
        cin >> N;
        int a, b;
        cookies.assign(N, vector<int>(2));
        for (int i = 0; i < N; i++)
        {
            cin >> a >> b;
            cookies[i][0] = a;
            cookies[i][1] = b;
        }
        solve();
    }
    return 0;
}