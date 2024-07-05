#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdlib>

using namespace std;

vector<int> v;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long T, N, M, K;
    cin >> T >> N >> M;
    long long r, c;
    if (T % M != 0)
        r = T / M + 1;
    else
        r = T / M;
    if (N % M != 0)
        c = N / M + 1;
    else
        c = N / M;

    cout << r * c;
    return 0;
}
