#include <algorithm>
#include <iostream>
#include <cstring>
#include <stack>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    long long up, down;
    up = n * (n - 1) * (n - 2) * (n - 3) / 24;
    cout << up;

    return 0;
}