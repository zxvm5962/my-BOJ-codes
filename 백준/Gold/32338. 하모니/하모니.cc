#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Power
{
    int m, w, v;
};

pair<int, int> solve(int N, vector<Power> &powers)
{
    int K = powers.size();
    vector<vector<vector<int>>> dp(N + 1, vector<vector<int>>(K + 1, vector<int>(2 * K + 1, -1)));

    // dp[i][j][k]: i 시간까지 사용하고, j개의 수련을 선택했을 때, 조화의 합이 k-K일 때의 최대 기력
    // k-K를 사용하는 이유는 조화의 합이 음수일 수 있기 때문

    // 초기화
    dp[0][0][K] = 0;

    for (int i = 0; i <= N; i++)
    {
        for (int j = 0; j < K; j++)
        {
            for (int k = 0; k <= 2 * K; k++)
            {
                if (dp[i][j][k] == -1)
                    continue;

                // j번째 수련을 선택하지 않는 경우
                dp[i][j + 1][k] = max(dp[i][j + 1][k], dp[i][j][k]);

                // j번째 수련을 선택하는 경우
                if (i + powers[j].w <= N)
                {
                    int newK = k + powers[j].m;
                    if (0 <= newK && newK <= 2 * K)
                    {
                        int newV = dp[i][j][k] + powers[j].v;
                        if (newK == K)
                            newV *= 2; // 조화가 0이 되면 기력 2배
                        else if (k == K)
                            newV = dp[i][j][k] / 2 + powers[j].v; // 조화가 깨지면 원상복귀
                        dp[i + powers[j].w][j + 1][newK] = max(dp[i + powers[j].w][j + 1][newK], newV);
                    }
                }
            }
        }
    }

    int maxV = 0;
    int minM = 0;
    for (int i = 0; i <= N; i++)
    {
        for (int k = 0; k <= 2 * K; k++)
        {
            if (dp[i][K][k] > maxV)
            {
                maxV = dp[i][K][k];
                minM = k - K;
            }
            else if (dp[i][K][k] == maxV)
            { // 가능한 값이 여러 개일 때, 조화의 절댓값이 작은 값을 정답으로 인정함
                if (abs(minM) > abs(k - K))
                {
                    minM = k - K;
                }
                // 조화의 절댓값까지 같다면, 양의 값을 정답으로 인정함
                else if (abs(minM) == abs(k - K))
                {
                    minM = abs(k - K);
                }
            }
        }
    }

    return {minM, maxV};
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K;
    cin >> K >> N;

    vector<Power> powers(K);
    for (int i = 0; i < K; i++)
    {
        cin >> powers[i].m >> powers[i].w >> powers[i].v;
    }

    auto res = solve(N, powers);
    cout << res.first << " " << res.second;

    return 0;
}