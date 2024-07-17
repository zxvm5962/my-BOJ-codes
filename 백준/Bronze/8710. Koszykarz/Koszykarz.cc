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
    cin >> N >> M >> K;

    int res = (M - N);
    if (res % K == 0)
        res = res / K;
    else
        res = res / K + 1;

    cout << res;
    return 0;
}
