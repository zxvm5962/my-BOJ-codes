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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ull T, N, M, K;
    int num, res, cnt = 1, sum = 0;

    cin >> N >> M;
    if (N > 2 && M < 5)
        cout << "TroyMartian\n";
    if (N < 7 && M > 1)
        cout << "VladSaturnian\n";
    if (N < 3 && M < 4)
        cout << "GraemeMercurian\n";

    return 0;
}
