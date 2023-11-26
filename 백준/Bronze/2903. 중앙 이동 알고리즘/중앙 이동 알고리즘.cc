#include <algorithm>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, tmp = 2;
    cin >> t;
    int arr[16] = {0};
    arr[0] = 4, arr[1] = 9;
    for (int i = 2; i <= t; i++)
    {
        arr[i] = pow(sqrt(arr[i-1]) + tmp,2);
        tmp *= 2;
    }
    cout << arr[t];
    
    return 0;
}
