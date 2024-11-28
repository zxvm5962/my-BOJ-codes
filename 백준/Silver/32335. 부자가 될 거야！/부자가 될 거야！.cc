#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M;
    cin >> N >> M;
    string lock;
    cin >> lock;
    for (int i = 0; i < N; i++)
    {
        if (lock[i] == '0')
            continue;
        if ('9' - lock[i] < M)
        {
            M -= (1 + '9' - lock[i]);
            lock[i] = '0';
        }
    }
    if (M != 0)
    {
        lock[N - 1] += M % 10;
    }

    cout << lock;
    return 0;
}