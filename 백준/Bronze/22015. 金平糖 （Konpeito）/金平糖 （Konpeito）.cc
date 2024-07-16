#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdlib>

using namespace std;

vector<int> v(10);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long T, N, M, K;
    cin >> N >> M >> K;
    int maxV = max(max(N, M), K);
    cout << 3 * maxV - N - M - K;

    return 0;
}
