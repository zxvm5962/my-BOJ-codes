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
    cin >> N >> M >> K;
    long long total = N * 24 * 60 + M * 60 + K;
    long long first = 11 * 24 * 60 + 11 * 60 + 11;
    if (total - first >= 0)
        cout << total - first;
    else
        cout << -1;
    return 0;
}
