#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <tuple>

using namespace std;

vector<int> v;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long T, N;
    cin >> N;
    int cnt = 0;
    long long M = 1, K = N;
    while (K != 0)
    {
        cnt++;
        K /= 10;
        M *= 10;
    }
    M /= 10;
    long long sum = 0;
    long long nine = 9;
    long long modNum = 1234567;
    for (int i = 1; i < cnt; i++)
    {
        sum += nine * i;
        nine *= 10;
        sum %= modNum;
    }
    sum += (N - M + 1) * cnt;
    cout << sum % modNum;
    return 0;
}
