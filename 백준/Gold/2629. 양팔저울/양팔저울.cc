#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <deque>
#include <cmath>
#include <set>

using namespace std;

#define ull unsigned long long

vector<int> v;

vector<int> r;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ull T, N, M, K;
    int num, res, cnt = 1, sum = 0;
    cin >> T;
    while (T--)
    {
        cin >> num;
        v.push_back(num);
    }

    for (int i = 0; i < v.size(); i++)
    {
        int size = r.size();
        for (int j = 0; j < size; j++)
        {
            if (find(r.begin(), r.end(), r[j] + v[i]) == r.end())
                r.push_back(r[j] + v[i]);
            if (find(r.begin(), r.end(), abs(r[j] - v[i])) == r.end())
                r.push_back(abs(r[j] - v[i]));
        }
        if (find(r.begin(), r.end(), v[i]) == r.end())
            r.push_back(v[i]);
    }

    cin >> N;
    while (N--)
    {
        cin >> M;
        if (find(r.begin(), r.end(), M) != r.end())
        {
            cout << "Y ";
        }
        else
            cout << "N ";
    }

    return 0;
}
