#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int r, c, k;
int cnt = 0;

int arr[101][101];
int count[101];

int maxC = 3;
int maxR = 3;

void solve()
{
    while (1)
    {
        if (arr[r][c] == k)
        {
            return;
        }

        if (cnt >= 100)
        {
            cnt = -1;
            return;
        }

        cnt++;

        if (maxR >= maxC)
        {
            for (int i = 0; i < maxR; i++)
            {
                int count[101] = {0};

                vector<pair<int, int>> v(0); // 등장 횟수, 해당 숫자
                for (int j = 0; j < maxC; j++)
                {
                    if (arr[i][j] == 0)
                    {
                        continue;
                    }
                    else
                        count[arr[i][j]]++;
                }

                for (int j = 1; j < 101; j++)
                {
                    if (count[j] > 0)
                    {
                        v.push_back({count[j], j});
                    }
                }

                // 기존 행 초기화
                for (int j = 0; j < 100; j++)
                    arr[i][j] = 0;

                sort(v.begin(), v.end());

                int len = v.size();

                for (int j = 0; j < len; j++)
                {
                    arr[i][2 * j] = v[j].second;
                    arr[i][2 * j + 1] = v[j].first;
                }

                maxC = max(maxC, 2 * len);
            }
        }
        else
        {
            for (int i = 0; i < maxC; i++)
            {
                int count[101] = {0};

                vector<pair<int, int>> v(0); // 등장 횟수, 해당 숫자
                for (int j = 0; j < maxR; j++)
                {
                    if (arr[j][i] == 0)
                    {
                        continue;
                    }
                    else
                        count[arr[j][i]]++;
                }

                for (int j = 1; j < 101; j++)
                {
                    if (count[j] > 0)
                    {
                        v.push_back({count[j], j});
                    }
                }

                // 기존 행 초기화
                for (int j = 0; j < 100; j++)
                    arr[j][i] = 0;

                sort(v.begin(), v.end());

                int len = v.size();

                for (int j = 0; j < len; j++)
                {
                    arr[2 * j][i] = v[j].second;
                    arr[2 * j + 1][i] = v[j].first;
                }

                maxR = max(maxR, 2 * len);
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> r >> c >> k;

    r--, c--;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    solve();

    cout << cnt;

    return 0;
}
