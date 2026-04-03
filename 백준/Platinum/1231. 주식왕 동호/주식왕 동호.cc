#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int C, D, M;

vector<vector<int>> prices;

void solve()
{
    for (int i = 0; i < D - 1; i++)
    {
        int cur = M;

        vector<int> money(cur + 1);

        for (int j = 0; j < C; j++)
        {
            for (int k = 1; k <= cur; k++)
            {
                if(k - prices[j][i] >= 0){
                    money[k] = max(money[k], money[k - prices[j][i]] + prices[j][i + 1] - prices[j][i]); // 냅색, M 자본 안에서 최대 수익
                }
            }
        }

        M += money[M];
    }

    cout << M;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> C >> D >> M;

    int a;

    prices.resize(C + 1);

    for (int i = 0; i < C; i++)
    {
        for (int j = 0; j < D; j++)
        {
            cin >> a;

            prices[i].push_back(a);
        }
    }

    solve();

    return 0;
}