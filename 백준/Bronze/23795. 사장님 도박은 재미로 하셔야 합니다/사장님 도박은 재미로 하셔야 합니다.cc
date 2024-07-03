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
    long long sum = 0;
    while (1)
    {
        cin >> T;
        if (T == -1)
            break;
        sum += T;
    }
    cout << sum;
    return 0;
}
