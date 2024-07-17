#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long T, N, M, K;
    cin >> T >> N >> M >> K;
    int cnt = 0;
    if (T == 8 || T == 9)
        cnt++;
    if (N == M)
        cnt++;
    if (K == 8 || K == 9)
        cnt++;
    if (cnt == 3)
        cout << "ignore";
    else
        cout << "answer";
    return 0;
}
