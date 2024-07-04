#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdlib>

using namespace std;

int arr[2];

vector<char> v;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long T, N, M, K;

    char C;
    cin >> T;
    while (T--)
    {
        cin >> C;
        v.push_back(C);
    }
    for (int i = 0; i < v.size(); i++)
    {
        C = v[i];
        if (C == 'D')
            arr[0]++;
        else
            arr[1]++;
        if (abs(arr[0] - arr[1]) >= 2)
            break;
    }

    cout << arr[0] << ':' << arr[1];
}
