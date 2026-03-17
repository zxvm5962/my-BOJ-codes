#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int n, w, l;

int res = 0;

deque<int> dq;

void solve()
{

    deque<pair<int, int>> q; // 무게, 다리 위 시간

    while (!(dq.empty() && q.empty()))
    {
        res++;
        int nl = 0;
        if (!q.empty())
        {

            for (auto &a : q)
            {
                a.second++;
                nl += a.first;
            }

            if (q.front().second > w)
            {
                nl -= q.front().first;
                q.pop_front();
            }
        }

        if (!dq.empty())
        {
            if (dq.front() + nl <= l && q.size() + 1 <= w)
            {
                nl += dq.front();
                q.push_back({dq.front(), 1});
                dq.pop_front();
            }
        }
    }

    cout << res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> w >> l;

    int a;

    for (int i = 0; i < n; i++)
    {
        cin >> a;

        dq.push_back(a);
    }

    solve();

    return 0;
}
