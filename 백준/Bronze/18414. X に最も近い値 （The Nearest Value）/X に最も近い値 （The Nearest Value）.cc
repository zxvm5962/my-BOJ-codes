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
    int min = 1e7, res;
    for (int i = M; i <= K; i++)
    {
        if (abs(N - i) < min)
        {
            min = abs(N - i);
            res = i;
        }
    }
    cout << res;
    return 0;
}
