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
    cin >> N >> M >> K;
    if (N + M + K >= 100)
        cout << "OK";
    else
    {
        if (N < M && N < K)
            cout << "Soongsil";
        else if (M < N && M < K)
            cout << "Korea";
        else
            cout << "Hanyang";
    }
    return 0;
}
