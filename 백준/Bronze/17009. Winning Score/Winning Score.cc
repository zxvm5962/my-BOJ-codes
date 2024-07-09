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
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    int A = 3 * a + 2 * b + c;
    int B = 3 * d + 2 * e + f;
    if (A > B)
        cout << "A";
    else if (A == B)
        cout << "T";
    else
        cout << "B";
    return 0;
}
