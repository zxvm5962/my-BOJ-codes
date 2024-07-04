#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long T, N, M, K;
    cin >> N >> M >> K;
    cout << N + M - K << '\n';
    string a, b, c;
    a = to_string(N);
    b = to_string(M);
    a += b;
    N = stoi(a);
    cout << N - K;
    return 0;
}
