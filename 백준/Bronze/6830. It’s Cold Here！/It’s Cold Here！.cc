#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <map>
#include <deque>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, m, k = 201, sum = 0;
    double a, b, c, d, e, f = 0;
    string str, city;
    while(cin >> str >> n)
    {
        if(k > n){
            k = n;
            city = str;
        }
    }
    cout << city;
    return 0;
}
