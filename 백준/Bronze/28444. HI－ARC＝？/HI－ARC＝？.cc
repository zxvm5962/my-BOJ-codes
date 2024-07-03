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
    int h, i, a, r, c;
    cin >> h >> i >> a >> r >> c;
    cout << h * i - a * r * c;
    return 0;
}
