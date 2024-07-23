#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, W;
    cin >> N >> W;
    vector<int> weight(N), value(N);
    for (int i = 0; i < N; ++i)
        cin >> weight[i] >> value[i];
    // DP 테이블 정의
    vector<vector<int>> dp(N + 1, vector<int>(W + 1, 0));
    // DP 반복
    for (int i = 0; i < N; ++i)
    {
        for (int w = 0; w <= W; ++w)
        {
            // i번째 물건을 선택한 경우
            if (w - weight[i] >= 0)
                dp[i + 1][w] = max(dp[i + 1][w], dp[i][w - weight[i]] + value[i]);
            
            // i번째 물건을 선택하지 않은 경우
            dp[i + 1][w] = max(dp[i + 1][w], dp[i][w]);
        }
    }
    // 최적값 출력
    cout << dp[N][W] << endl;

    return 0;
}