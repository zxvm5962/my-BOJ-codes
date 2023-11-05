#include <algorithm>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string str;
    int t;
    cin >> t;
    cin.ignore();
    for(int j =1; j<=t;j++)
    {
        int arr[150] = {0};
        int min = 4;
        getline(cin, str);
        for (int i = 0; i < str.length(); i++)
        {
            str[i] = tolower(str[i]);
            arr[str[i]]++;
        }
        for (int i = 'a'; i <= 'z'; i++)
        {
            if (min > arr[i])
            {
                min = arr[i];
            }
        }
        cout << "Case " << j <<": ";
        if (min == 0)
            cout << "Not a pangram\n";
        else if (min == 1)
            cout << "Pangram!\n";
        else if (min == 2)
            cout << "Double pangram!!\n";
        else
            cout << "Triple pangram!!!\n";
    }

    return 0;
}
