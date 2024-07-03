#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <tuple>

using namespace std;

vector<tuple<int, int, int>> v;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, N, M, K;

    cin >> N >> M >> K;

    cin >> T;
    for (int i = 0; i < T + 1; i++)
    {
        for (int j = 0; j < T + 1; j++)
        {
            for (int k = 0; k < T + 1; k++)
            {
                if (N * k + M * j + K * i <= T)
                {
                    v.push_back({k, j, i});
                }
            }
        }
    }
    int cnt = 0;
    for (auto a : v)
    {
        if (cnt == 0)
        {
            cnt++;
            continue;
        }
        cout << get<0>(a) << " Brown Trout, " << get<1>(a) << " Northern Pike, " << get<2>(a) << " Yellow Pickerel\n";
    }
    cout << "Number of ways to catch fish: " << v.size() - 1;

    return 0;
}
