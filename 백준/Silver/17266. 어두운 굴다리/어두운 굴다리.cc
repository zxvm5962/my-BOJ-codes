#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <tuple>

using namespace std;

vector<int> v;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, N, M, K;
    string str;
    cin >> K >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> N;
        v.push_back(N);
    }
    int maxL = 0, start = v[0], end = K - v[T - 1];
    for (int i = 1; i < v.size() - 1; i++)
    {
        int length = (v[i] - v[i - 1] + 1) / 2;
        if (maxL < length)
            maxL = length;
    }
    cout << max(max(maxL, start), end);
    return 0;
}
