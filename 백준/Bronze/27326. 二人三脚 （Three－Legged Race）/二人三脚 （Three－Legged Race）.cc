#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <map>
#include <deque>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, sum = 0;
    cin >> n;
    sum = n * (n + 1);
    for (int i = 1; i < n * 2; i++)
    {
        int x;
        cin >> x;
        sum -= x;
    }
    cout << sum;
}
