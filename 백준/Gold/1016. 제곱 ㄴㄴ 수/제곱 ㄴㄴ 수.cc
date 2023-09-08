#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long min, max;
    int cnt = 0;
    cin >> min >> max;
    vector<bool> arr(max - min + 1);

    for (long long i = 2; i * i <= max; i++)
    {
        long long pow = i * i;

        long long start = min / pow;
        if (min % pow != 0)
        {
            start++;
        }

        for (long long j = start; j * pow <= max; j++)
        {
            arr[(int)(j * pow - min)] = 1;
        }
    }

    for (int i = 0; i < max - min + 1; i++)
    {
        if (arr[i] == 0)
        {
            cnt++;
        }
    }

    cout << cnt;
}