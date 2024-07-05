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
    for (int i = 0; i < T; i++)
    {
        cin >> N >> M;
        cout << N - (M / 7) + (M / 4) << '\n';
    }

    return 0;
}
