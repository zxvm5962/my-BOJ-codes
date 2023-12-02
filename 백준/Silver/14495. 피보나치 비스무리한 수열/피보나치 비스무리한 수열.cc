#include <algorithm>
#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    unsigned long long arr[120] = {0};
    int t;
    cin >> t;
    arr[1] = 1, arr[2] = 1, arr[3] = 1;

    for (int i = 4; i <= t; i++)
    {
        arr[i] = arr[i-1] + arr[i-3];
    }
    cout << arr[t];
    

    return 0;
}
