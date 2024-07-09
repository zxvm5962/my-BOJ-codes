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
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        if (i % 7 == 0 && i % 11 == 0)
            cout << "Wiwat!\n";
        else if (i % 7 == 0)
            cout << "Hurra!\n";
        else if (i % 11 == 0)
            cout << "Super!\n";
        else
            cout << i << '\n';
    }

    return 0;
}
