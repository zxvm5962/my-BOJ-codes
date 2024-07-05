#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdlib>

using namespace std;

vector<int> v;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long T, N, M, K;
    M = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> N;
        M += N * 90;
    }
    M %= 360;
    if (M == 0)
        cout << "N";
    else if (M == 90)
        cout << "E";
    else if (M == 180)
        cout << "S";
    else if (M == 270)
        cout << "W";

    return 0;
}
