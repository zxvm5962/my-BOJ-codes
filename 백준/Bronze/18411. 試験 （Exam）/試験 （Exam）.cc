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
    cin >> N >> M >> K;
    v.push_back(N);
    v.push_back(M);
    v.push_back(K);
    sort(v.begin(),v.end());
    cout << v[1] + v[2];
    return 0;
}
