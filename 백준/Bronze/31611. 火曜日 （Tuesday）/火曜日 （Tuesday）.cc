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
    cin >> N;
    if (N % 7 == 2)
    {
        cout << 1;
    }
    else
        cout << 0;
    return 0;
}
