#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <deque>
#include <cmath>

using namespace std;

#define ull unsigned long long

vector<int> v;
int arr[200];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ull T, N, M, K;
    int num, res, cnt = 1, sum = 0;
    cin >> T;
    string str;
    char cur;
    while (T--)
    {
        cin >> str;
        cur = str[0];
        cout << cur;
        for (int i = 1; i < str.length(); i++)
        {
            if (cur == str[i])
                continue;
            else {
                cout << str[i];
                cur = str[i];
            }
        }
        cout << '\n';
    }
    return 0;
}
