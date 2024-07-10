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
    cin >> N >> M >> K;
    int sum = 250;
    while (N > M)
    {
        M += K;
        sum += 100;
    }
    cout << sum;
    return 0;
}
