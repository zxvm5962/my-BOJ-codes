#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;
int max(long long n, long long m)
{
    return n > m ? n : m;
}
int min(long long n, long long m)
{
    return n > m ? m : n;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long T, N, M, K;
    cin >> T >> N;
    if (T < 5)
        cout << N;
    else if (T < 10)
        cout << max(0, N - 500);
    else if (T < 15)
        cout << max(0, min(N - 500, N * 0.9));

    else if (T < 20)
        cout << max(0, min(N - 2000, N * 0.9));
    else
        cout << max(0, min(N - 2000, N * 0.75));

    return 0;
}

