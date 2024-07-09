#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdlib>

using namespace std;

vector<int> v(10);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long T, N, M, K;
    cin >> T;
    int sum = 0;
    while (T--)
    {
        cin >> N >> M;
        if (N == 136)
            sum += 1000;
        else if (N == 142)
            sum += 5000;
        else if (N == 148)
            sum += 10000;
        else if (N == 154)
            sum += 50000;
    }
    cout << sum;
    return 0;
}
