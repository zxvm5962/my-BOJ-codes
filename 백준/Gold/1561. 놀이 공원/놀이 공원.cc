#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int N, M;

const long long MAX = 2e10;

vector<int> atr;

long long res;

long long check(long long mid)
{
    long long sum = 0;

    for (int i = 1; i <= M; i++)
    {
        sum += 1 + mid / atr[i];
    }

    return sum;
}

void solve(vector<int> &atr)
{
    long long start = 1, end = MAX;

    while (start <= end)
    {
        long long mid = (start + end) / 2;
        long long sum = check(mid);
        if (sum >= N)
        {
            res = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    // res == 총 운행시간이 된 상황
    long long before = check(res - 1);
    int ans;

    for (int i = 1; i <= M; i++)
    {
        if(res % atr[i] == 0){
            before++;
        }
        
        if(before == N){
            ans = i;
            break;
        }
    }

    cout << ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    atr.resize(M + 1);

    int a;

    for (int i = 1; i <= M; i++)
    {
        cin >> atr[i];
    }

    if (N <= M)
    {
        cout << N;
    }
    else
        solve(atr);

    return 0;
}

// 8
// 9 5 3 3 2
// 1 2 3 4 5