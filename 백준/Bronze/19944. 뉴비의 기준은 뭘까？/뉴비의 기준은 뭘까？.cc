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

    long long T, N, M, K;
    cin >> N >> M;
    if (M <= 2)
        cout << "NEWBIE!";
    else if (N >= M && M > 2)
        cout << "OLDBIE!";
    else
        cout << "TLE!";
    return 0;
}
