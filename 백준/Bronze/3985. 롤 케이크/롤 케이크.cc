#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

vector<int> v(1001);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, N, M, K;
    cin >> K >> T;
    int max = 0, maxR;
    int realMax = 0, realR;
    for (int i = 0; i < T; i++)
    {
        int cnt = 0;
        cin >> N >> M;
        if (max < M - N)
        {
            max = M - N;
            maxR = i + 1;
        }

        for (int j = N; j <= M; j++)
        {
            if (v[j] == 0)
            {
                v[j] = 1;
                cnt++;
            }
        }

        if (realMax < cnt)
        {
            realMax = cnt;
            realR = i + 1;
        }
    }
    cout << maxR << '\n'
         << realR;
    return 0;
}
