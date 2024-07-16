#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long T, N, M, K;
    string str;

    while (1)
    {

        getline(cin, str);
        if (cin.eof())
            break;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == 'i')
                str[i] = 'e';
            else if (str[i] == 'e')
                str[i] = 'i';
            else if (str[i] == 'E')
                str[i] = 'I';
            else if (str[i] == 'I')
                str[i] = 'E';
        }
        cout << str << '\n';
    }
    return 0;
}
