#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    double T, N, M, K;
    cin >> T >> N;
    if (T > N)
        cout << T + N;
    else if (T <= N)
        cout << N - T;
}
