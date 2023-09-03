#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
#define ull unsigned long long

ull Base[3] = {2, 7, 61};

ull Power(ull x, ull y, ull mod)
{
    ull ret = 1;
    x %= mod;
    while (y)
    {
        if (y % 2 == 1)
            ret = (ret * x) % mod;
        y /= 2;
        x = (x * x) % mod;
    }
    return ret;
}

bool isPrime(ull n, ull a)
{
    if (a % n == 0)
        return true;
    ull k = n - 1;
    while (1)
    {
        ull temp = Power(a, k, n);
        if (temp == n - 1)
            return true;
        if (k % 2 == 1)
            return (temp == 1 || temp == n - 1);
        k /= 2;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        ull A;
        cin >> A;
        if(A == 0 || A == 1){
            cout << "2\n";
            continue;
        }
        for (ull k = A; k < 1e10; k++)
        {
            int cnt = 0;
            for (int j = 0; j < 3; j++)
                if (!isPrime(k, Base[j]))
                {
                    cnt++;
                }
            if(cnt == 0){
                cout << k << '\n';
                break;
            }
        }
    }
}
