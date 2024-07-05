#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdlib>

using namespace std;

vector<int> v;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long T, N, M, K;
    cin >> T;
    while (T--)
    {
        cin >> N >> M;
        cout << N << ' ' << M << '\n';
        cout << M + (N - 1) * (M - 2) << '\n';
    }
    return 0;
}
