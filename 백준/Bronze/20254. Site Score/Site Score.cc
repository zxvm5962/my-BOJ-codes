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

    int T, N, M, K;
    cin >> T >> N >> M >> K;
    cout << 56 * T + 24 * N + 14 * M + 6 * K;

    return 0;
}
