#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <cstring>

using namespace std;

int T, N, K, t, M;

int fast_submit[101];

struct Score
{
    int i, j, s;
};

bool cmp(Score a, Score b)
{
    if (a.i == b.i)
    {
        if (a.j == b.j)
            return a.s > b.s;

        return a.j < b.j;
    }

    return a.i < b.i;
}

void solve(vector<Score> &v)
{
    int score[101][101] = {0}; // 조 번호, 문항번호
    int cnt[101] = {0};        // 조별 점수

    for (int i = 0; i < M; i++)
    {
        score[v[i].i][v[i].j] = max(score[v[i].i][v[i].j], v[i].s);
        cnt[v[i].i]++;
    }

    int my_score = 0;

    for (int i = 1; i < K + 1; i++)
    {
        my_score += score[t][i];
    }

    int res = 1;

    for (int i = 1; i <= N; i++)
    {
        int cmp_score = 0;
        for (int j = 1; j < K + 1; j++)
        {
            cmp_score += score[i][j];
        }

        if (my_score < cmp_score)
        {
            res++;
        }
        else if (my_score == cmp_score)
        {
            if (cnt[t] > cnt[i])
            {
                res++;
            }
            else if (cnt[t] == cnt[i])
            {
                if (fast_submit[t] > fast_submit[i])
                {
                    res++;
                }
            }
        }
    }

    cout << res << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> T;

    while (T--)
    {
        cin >> N >> K >> t >> M;

        int a, b, s;

        vector<Score> v;

        memset(fast_submit, 0, sizeof(fast_submit));

        for (int i = 0; i < M; i++)
        {
            cin >> a >> b >> s;

            v.push_back({a, b, s});
            fast_submit[a] = i;
        }

        sort(v.begin(), v.end(), cmp);

        solve(v);
    }

    return 0;
}
