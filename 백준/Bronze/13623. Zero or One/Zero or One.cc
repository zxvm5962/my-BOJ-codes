#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long T, N, M, K;
    cin >> N >> M >> K;

    if (N != M && N != K)
        cout << "A";
    else if (M != N && M != K)
        cout << "B";
    else if (K != N && K != M)
        cout << "C";
    else
        cout << '*';
    return 0;
}
