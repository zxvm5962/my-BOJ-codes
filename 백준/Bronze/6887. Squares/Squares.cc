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
int arr[200];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ull T, N, M, K;
    int num, res, cnt = 1, sum = 0;
    cin >> T;
    for (int i = 1; i <= T + 10; i++)
    {
        int sq = i * i;
        if (sq > T)
        {
            cout << "The largest square has side length " << i - 1 << '.';
            break;
        }
    }

    return 0;
}
