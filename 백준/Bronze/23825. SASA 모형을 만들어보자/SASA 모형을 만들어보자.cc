#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;
    int cnt = 0;
    while (N > 1 && M > 1)
    {
        N -= 2;
        M -= 2;
        cnt++;
    }

    cout << cnt;
}
