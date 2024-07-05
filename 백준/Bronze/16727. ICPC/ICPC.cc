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
    int s1, p1, s2, p2;
    cin >> p1 >> s1 >> s2 >> p2;
    int P = p1 + p2;
    int S = s1 + s2;
    if (P > S)
        cout << "Persepolis";
    else if (S > P)
        cout << "Esteghlal";
    else
    {
        if (p2 > s1)
            cout << "Persepolis";
        else if (s1 > p2)
            cout << "Esteghlal";
        else
            cout << "Penalty";
    }
    return 0;
}
