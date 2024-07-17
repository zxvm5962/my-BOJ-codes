#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <deque>
#include <cmath>

using namespace std;

#define ull unsigned long long

deque<pair<int, int>> v;
vector<int> point;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ull T, N, M, K;
    cin >> T;
    int idx;
    while (T--)
    {
        int cnt = 1;
        cin >> N >> idx;
        for (int i = 0; i < N; i++)
        {
            cin >> M;
            point.push_back(M);
            v.push_back({i, M});
        }
        sort(point.begin(), point.end());

        while (!v.empty())
        {
            if (v.front().second == point.back())
            {
                if (v.front().first == idx)
                {
                    cout << cnt << '\n';
                    break;
                }
                v.pop_front();
                point.pop_back();
                cnt++;
            }
            else
            {
                v.push_back(v.front());
                v.pop_front();
            }
        }
        v.clear();
        point.clear();
    }
    return 0;
}
