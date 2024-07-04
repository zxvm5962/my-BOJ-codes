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
    cin >> N >> M;
    M -= N;
    M /= 400;
    double res = 1 / (1 + pow(10, M));
    cout << res;
    return 0;
}
