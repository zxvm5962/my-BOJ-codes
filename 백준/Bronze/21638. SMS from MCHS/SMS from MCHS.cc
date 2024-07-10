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
    cin >> N >> M >> T >> K;
    if (T < 0 && K >= 10)
        cout << "A storm warning for tomorrow! Be careful and stay home if possible!";
    else if (T < N)
        cout << "MCHS warns! Low temperature is expected tomorrow.";
    else if (M < K)
        cout << "MCHS warns! Strong wind is expected tomorrow.";
    else
        cout << "No message";

    return 0;
}
