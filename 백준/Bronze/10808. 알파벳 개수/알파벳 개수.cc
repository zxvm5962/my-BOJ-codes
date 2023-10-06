#include <iostream>
#include <stdio.h>
#include <vector>
#include <cstring>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    int arr[27] = {0};

    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        arr[str[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        cout << arr[i] << ' ';
    }

    return 0;
}