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
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        cin >> N;
        if (T >= N)
            sum += N;
        else
            sum += T;
    }
    cout << sum;

    return 0;
}
