#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long T, N, M, K;
    cin >> T;
    int res;
    while (T--)
    {
        cin >> N >> M >> K;
        if (K <= M)
            res = 0;
        else
            res = K - M;

        if (N == 2)
            N = 3;
        else if (N == 3)
            N = 5;
        cout << res * N << '\n';
    }
    return 0;
}
