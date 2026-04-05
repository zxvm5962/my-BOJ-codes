#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

long long N, K;

long long res;

long long min(long long a, long long b)
{
    if (a >= b)
        return b;
    else
        return a;
}

long long check(long long mid) // n*n 격자에서 mid 보다 작은 수들 개수 합
{
    long long sum = 0;
    for (long long i = 1; i <= N; i++)
    {
        sum += min(N, mid / i);
    }

    return sum;
}

void solve()
{
    long long left = 1, right = N * N;

    while (left <= right)
    {
        long long mid = (left + right) / 2;

        if (check(mid) >= K)
        {
            res = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    cout << res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> K;

    solve();

    return 0;
}

// 1 2 3 4 5
// 2 4 6 8 10
// 3 6 9 12 15
// 4 8 12 16 20
// 5 10 15 20 25
// 1 2 2 3 3 4 6 6 9
// 1 2 2 3 3 4 4 4 5 5 6 6 8 8 9 10 10 12 12 15 15 16 20 20 25