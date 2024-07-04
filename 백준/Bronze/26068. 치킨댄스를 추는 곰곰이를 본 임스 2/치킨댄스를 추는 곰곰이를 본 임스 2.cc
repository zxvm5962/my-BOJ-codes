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
    char a, b;
    cin >> T;
    int cnt = 0;
    while (T--)
    {
        cin >> a >> b >> N;
        if (N <= 90)
            cnt++;
    }
    cout << cnt;

    return 0;
}
