#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <set>

using namespace std;

int N;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    vector<int> v;
    int a;

    for (int i = 0; i < N; i++)
    {
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    int cnt = 0;

    for (int i = 0; i < N; i++)
    {
        int start = 0, end = N - 1;

        while (start < end)
        {
            if (i == start)
            {
                start++;
                continue;
            }

            if (end == i)
            {
                end--;
                continue;
            }

            int target = v[start] + v[end];

            if (target == v[i])
            {
                cnt++;
                break;
            }
            else if (target > v[i])
            {
                end--;
            }
            else
            {
                start++;
            }
        }
    }

    cout << cnt;

    return 0;
}
