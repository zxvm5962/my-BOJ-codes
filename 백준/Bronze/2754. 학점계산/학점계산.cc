#include <algorithm>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    cin >> str;

    float num;

    if (str[0] == 'A')
    {
        num = 4;
    }
    if (str[0] == 'B')
    {
        num = 3;
    }
    else if (str[0] == 'C')
    {
        num = 2;
    }
    else if (str[0] == 'D')
    {
        num = 1;
    }
    else if (str[0] == 'F')
    {
        num = 0;
        printf("%.1f", num);
        return 0;
    }
    if (str[1] == '+')
    {
        num += 0.3;
    }
    else if (str[1] == '-')
    {
        num -= 0.3;
    }

    printf("%.1f", num);
    return 0;
}