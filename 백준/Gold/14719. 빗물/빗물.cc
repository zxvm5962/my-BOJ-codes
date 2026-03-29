#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int N, M;

vector<int> v;

int res = 0;

void solve()
{
    int i = 0, j = v.size() - 1;

    while (j - i > 0)
    {
        int minV = min(v[i], v[j]); // 가장 자리부터 작은 거 기준으로 다 채움

        bool point; // false: i 늘리기 true: j 줄이기
        if (minV == v[i])
        {
            point = false;
        }
        else
        {
            point = true;
        }

        for (int k = i + 1; k < j; k++)
        {
            if (minV > v[k])
            {
                res += minV - v[k];
                v[k] = minV;
            }
        }

        if (point)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    int a;

    for (int i = 0; i < M; i++)
    {
        cin >> a;

        v.push_back(a);
    }

    solve();

    cout << res;

    return 0;
}
