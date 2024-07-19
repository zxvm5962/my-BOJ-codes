#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <deque>
#include <cmath>

using namespace std;

#define ull unsigned long long

vector<int> v;
int dp[2001][2001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ull T, N, M, K;
    int num, res, cnt = 1, sum = 0;
    cin >> T;
    cout << "Gnomes:\n";
    while (T--)
    {
        cin >> N >> M >> K;
        if (N < M && N < K && M < K)
            cout << "Ordered\n";
        else if (N > M && N > K && M > K)
            cout << "Ordered\n";
        else
            cout << "Unordered\n";
    }
    return 0;
}
