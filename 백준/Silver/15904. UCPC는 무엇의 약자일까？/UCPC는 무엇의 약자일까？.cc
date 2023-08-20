#include <algorithm>
#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    int u = 0, c = 0, p = 0;
    getline(cin,str);

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'U')
        {
            u = 1;
        }
        if (str[i] == 'C' && c == 0 && u == 1)
        {
            c = 1;
        }
        if (str[i] == 'P' && c == 1)
        {
            p = 1;
        }
        if (str[i] == 'C' && p == 1)
        {
            c = 2;
        }
    }

    if(c == 2){
        cout << "I love UCPC";
    }
    else{
        cout << "I hate UCPC";
    }


    return 0;
}