#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <stdio.h>

using namespace std;

vector<int> v;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long T, N, M, K;
    cin >> T;
    double a, b, c;
    while (T--)
    {
        cin >> c >> a >> b;
        double price = c * a * b;
        printf("$%.2lf\n", price);
    }
    return 0;
}
