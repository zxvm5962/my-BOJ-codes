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
    double a, b;
    while (1)
    {
        cin >> a;
        if (a == 0)
            break;
        b = 1 + a + pow(a, 2) + pow(a, 3) + pow(a, 4);
        printf("%.2lf\n", b);
    }
    return 0;
}
