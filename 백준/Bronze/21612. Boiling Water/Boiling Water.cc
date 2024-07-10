#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdlib>

using namespace std;

vector<int> v(10);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long T, N, M, K;
    cin >> T;
    N = 5 * T - 400;
    cout << N << '\n';
    if (N < 100)
        cout << 1;
    else if (N > 100)
        cout << -1;
    else
        cout << 0;
    return 0;
}
