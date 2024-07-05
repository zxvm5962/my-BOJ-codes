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
    char w;
    int cnt = 0;
    for (int i = 0; i < 6; i++)
    {
        cin >> w;
        if (w == 'W')
            cnt++;
    }
    if (cnt == 0)
        cout << -1;
    else if (cnt < 3)
        cout << 3;
    else if (cnt < 5)
        cout << 2;
    else
        cout << 1;

    return 0;
}
