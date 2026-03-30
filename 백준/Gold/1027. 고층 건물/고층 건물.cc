#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int N;

vector<int> v;

int maxV = 0;

void solve()
{

    for (int i = 0; i < v.size(); i++)
    {
        int cnt = 0;

        for (int j = 0; j < v.size(); j++)
        {
            if (i == j) // 같으면 할 필요없음
                continue;

            bool flag = false;
            double line = (double)(v[j] - v[i]) / (j - i);

            if (abs(i - j) == 1)
            {
                cnt++;
                continue;
            }
            else if (i > j + 1)
            {
                for (int k = j + 1; k < i; k++)
                {
                    double cmp_line = (double)(v[k] - v[i]) / (k - i);
                    if (line >= cmp_line)
                    {
                        flag = true;
                        break;
                    }
                }
            }
            else
            {
                for (int k = i + 1; k < j; k++)
                {
                    double cmp_line = (double)(v[k] - v[i]) / (k - i);
                    if (line <= cmp_line)
                    {
                        flag = true;
                        break;
                    }
                }
            }

            if (flag)
            {
                continue;
            }
            else
            {
                cnt++;
            }
        }

        maxV = max(maxV, cnt);

    }

    cout << maxV;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    int a;

    for (int i = 0; i < N; i++)
    {
        cin >> a;

        v.push_back(a);
    }

    solve();

    return 0;
}
