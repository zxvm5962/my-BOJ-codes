#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <deque>
#include <cmath>

using namespace std;

#define ull unsigned long long

vector<string> v;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ull T, N, M, K;
    int num, res;
    string a;
    for (int i = 0; i < 3; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == "Fizz" || v[i] == "Buzz" || v[i] == "FizzBuzz")
        {
            continue;
        }
        else
        {
            int num = stoi(v[i]);
            res = num + 3 - i;
            break;
        }
    }
    if (res % 3 == 0 && res % 5 == 0)
        cout << "FizzBuzz";
    else if (res % 3 == 0)
        cout << "Fizz";
    else if (res % 5 == 0)
        cout << "Buzz";
    else
        cout << res;

    return 0;
}
