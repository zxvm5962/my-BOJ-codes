#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <tuple>

using namespace std;

vector<int> v(40001);
vector<int> rec;
void find()
{
    for (int i = 2; i < 40000; i++)
    {
        for (int j = 2; i * j < 40000; j++)
        {
            v[i * j] = 1;
        }
    }

    for (int i = 2; i < 40000; i++)
    {
        if (v[i] == 0)
            rec.push_back(i);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long T, N, M, K;
    cin >> T;
    while (T--)
    {
        cin >> N;
        find();
        int cnt = 0;
        vector<string> result;
        for (int i = 0; i < rec.size(); i++)
        {
            for (int j = rec.size() - 1; j >= 0 && j >= i; j--)
            {
                if (rec[i] + rec[j] == N)
                {
                    string str = (to_string(rec[i])+'+'+to_string(rec[j]));
                    result.push_back(str);
                    cnt++;
                }
            }
        }
        cout << N << " has " << cnt << " representation(s)\n";
        for (int i = 0; i < result.size(); i++)
        {
            cout << result[i] << '\n';
        }
        cout << '\n';
        result.clear();
        rec.clear();
    }
}
