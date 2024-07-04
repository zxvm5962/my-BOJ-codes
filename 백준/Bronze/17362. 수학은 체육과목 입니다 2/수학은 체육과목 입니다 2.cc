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

    cin >> T;

    T %= 8;
    if (T == 0)
        cout << 2;
    else if (T == 7)
        cout << 3;
    else if (T == 6)
        cout << 4;
    else
        cout << T;

    return 0;
}
