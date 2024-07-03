#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <tuple>

using namespace std;

vector<string> v;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, N, M, K;
    string str;
    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        cin >> str;
        v.push_back(str);
    }

    for (int i = 0; i < M; i++)
    {
        vector<int> re(200);
        int max = 0;
        char point = v[0][i];
        for (int j = 0; j < N; j++)
        {
            re[v[j][i]]++;
            if (max < re[v[j][i]])
            {
                max = re[v[j][i]];
                point = v[j][i];
            }
            if (max == re[v[j][i]])
            {
                if (point > v[j][i])
                    point = v[j][i];
            }
        }
        cout << point;

        re.clear();
    }

    return 0;
}
