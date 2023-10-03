#include <algorithm>
#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    string str[t];

    for (int i = 0; i < t; i++)
    {
        cin >> str[i];
    }
    string key = str[0];
    for (int i = 1; i < t; i++)
    {
        for (int j = 0; j < key.length(); j++)
        {
            if(key[j] != str[i][j]){
                key[j] = '?';
            }
        }
        
    }

    cout << key;
    

    return 0;
}
