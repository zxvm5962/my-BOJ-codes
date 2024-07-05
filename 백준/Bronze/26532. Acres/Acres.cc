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
    cin >> N >> M;
    K = N * M;
    if (K % 24200 == 0)
        K /= 24200;
    else
    {
        K /= 24200;
        K++;
    }
    cout << K;
    return 0;
}
