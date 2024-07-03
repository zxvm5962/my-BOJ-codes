#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long T, N, M, K;
    int a, b;
    cin >> T >> N >> a >> M >> b;
    int C, D;
    if (T % N == 0)
        C = (T / N) * a;
    else
        C = (T / N + 1) * a;

    if (T % M == 0)
        D = (T / M) * b;
    else
        D = (T / M + 1) * b;
        
    cout << min(C, D);
    return 0;
}
