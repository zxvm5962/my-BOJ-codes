#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, K;
    cin >> N >> M;
    int maxB = N / 2;
    if (maxB >= M)
        cout << M;
    else
        cout << maxB;

    return 0;
}
