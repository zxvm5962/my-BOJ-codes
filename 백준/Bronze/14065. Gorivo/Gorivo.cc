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
    double mile, gal, a;

    cin >> a;
    mile = 3.785411784 / (a * 1.609344)  ;
    mile *= 100;
    printf("%.6lf", mile);
    return 0;
}
