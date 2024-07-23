#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <deque>
#include <cmath>
#include <set>

using namespace std;

#define ull unsigned long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ull T, N, M, K;
    int num, res, cnt = 1, sum = 0;
    cin >> N >> K;
    N--;
    while(N--){
        K /=2;
    }
    cout << K;

    return 0;
}
