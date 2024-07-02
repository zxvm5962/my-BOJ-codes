#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, N, M, K;
    cin >> N >> M;
    if (N >= (M + 1) / 2)
        cout << "E";
    else
        cout << "H";
}
