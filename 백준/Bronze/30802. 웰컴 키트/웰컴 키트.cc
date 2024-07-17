#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <stdio.h>
#include <cmath>

using namespace std;

#define ull unsigned long long

vector<ull> v;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ull T, N, M, K;
    cin >> T;
    for (int i = 0; i < 6; i++)
    {
        cin >> N;
        v.push_back(N);
    }
    cin >> M >> K;
    int sum = 0;
    for (int i = 0; i < 6; i++)
    {
        if (v[i] % M == 0)
            sum += v[i] / M;
        else
            sum += v[i] / M + 1;
    }
    cout << sum << '\n';
    cout << T / K << ' ' << T - K * (T / K);

    return 0;
}
