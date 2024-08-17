#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <map>
#include <deque>
#include <queue>

using namespace std;

int arr[201][201];

vector<long long> v;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, m, k = 0, sum = 0, cnt = 0, max = 0;
    string str, s;
    int min = 1e6;

    cin >> t;
    for (int i = 1; i < 100; i+=2)
    {
        sum += i;
        v.push_back(sum);
    }
    for (int i = 0; i < t; i++)
    {
        cin>> n;
        cout << v[n/2] << '\n';
    }
    
    

    return 0;
}
