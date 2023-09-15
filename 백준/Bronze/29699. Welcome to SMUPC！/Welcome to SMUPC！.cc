#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    n -= 1;
    n %= 14;
    string str = "WelcomeToSMUPC";
    cout << str[n];

    return 0;
}
