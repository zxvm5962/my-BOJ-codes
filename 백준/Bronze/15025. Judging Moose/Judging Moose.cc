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
    cin >> N >> M;
    if (N == 0 && M == 0)
        cout << "Not a moose";
    else if (N != M)
        cout
            << "Odd " << max(N, M) * 2;
    else
        cout << "Even " << N * 2;

    return 0;
}
