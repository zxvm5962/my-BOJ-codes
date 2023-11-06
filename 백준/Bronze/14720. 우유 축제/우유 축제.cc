#include <algorithm>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, num, cnt = 0;
    cin >> t;
    int arr[4] = {0};
    while (t--)
    {
        cin >> num;
        if (num == 0 && arr[0] == arr[2])
        {
            cnt++;
            arr[0]++;
        }
        else if (num == 1 && arr[0] - 1 == arr[1])
        {
            cnt++;
            arr[1]++;
        }
        else if (num == 2 && arr[1] - 1 == arr[2])
        {
            cnt++;
            arr[2]++;
        }
        else
            continue;
    }
    cout << cnt;

    return 0;
}
