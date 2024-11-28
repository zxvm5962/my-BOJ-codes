#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, d, min = 1e9;
    int resX, resY;

    cin >> N >> d;
    vector<vector<int>> v(1001, vector<int>(1001, 0));
    vector<vector<int>> w(1001, vector<int>(1001, 0));
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            cin >> v[i][j];
        }
    }

    w = v;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (v[i][j] == 1)
            {
                for (int k = -d; k <= d; k++)
                {
                    for (int l = -d; l <= d; l++)
                    {
                        if (i + k < 1 || i + k > N || j + l < 1 || j + l > N)
                            continue;
                        if (k == 0 && l == 0)
                            continue;
                        if (v[i][j] > 0)
                        {
                            w[i + k][j + l]++;
                        }
                    }
                }
            }
        }
    }
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (v[i][j] == 1)
                continue;
            if (min > w[i][j])
            {
                min = w[i][j];
                resX = i;
                resY = j;
            }
        }
    }
    cout << resX << ' ' << resY << '\n';
    if (min != 0)
        cout << min;

    return 0;
}