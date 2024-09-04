#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, k = 0, cnt = 0;
    string str;
    cin >> t;
    while (t--)
    {
        cnt = 0;
        k = 0;
        for (int i = 0; i < 10; i++)
        {
            cin >> n;
            cout << n << ' ';
            if (n == 17)
                k++;
            if (n == 18)
                cnt++;
        }
        cout << '\n';
        if (k == 1 && cnt == 1)
            cout << "both\n\n";
        else if (k == 1)
            cout << "zack\n\n";
        else if (cnt == 1)
            cout << "mack\n\n";
        else
            cout << "none\n\n";
    }
}