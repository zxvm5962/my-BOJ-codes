#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <deque>
#include <cmath>

using namespace std;

#define ull unsigned long long

deque<double> v;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    double T, N;
    long long M, K;
    cin >> T;
    if (T == 0)
    {
        cout << 0;
        return 0;
    }
    int a;
    a = round(T * 0.15);

    while (T--)
    {
        cin >> N;
        v.push_back(N);
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < a; i++)
    {
        v.pop_back();
        v.pop_front();
    }
    double sum = 0;
    double size = v.size();
    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];
    }
    double res = round(sum / size);
    cout << res;
    return 0;
}
