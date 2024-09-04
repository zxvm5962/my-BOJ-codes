#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, m, k = 0, cnt = 0, a, b;
    string str;
    cin >> n;
    for (int i = 0; i < n / 5; i++)
    {
        cout << "V";
    }
    n -= (n / 5) * 5;
    while(n--){
        cout << "I";
    }
}