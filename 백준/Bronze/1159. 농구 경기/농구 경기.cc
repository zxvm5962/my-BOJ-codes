#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string str;
    int t;
    int arr[140] = {0};
    cin >> t;
    bool flag = false;
    while (t--)
    {
        cin >> str;
        arr[str[0]]++;
    }
    for (int i = 'a'; i <= 'z'; i++)
    {
        if (arr[i] > 4)
        {
            printf("%c", i);
            flag = true;
        }
    }
    if(flag == false){
        cout << "PREDAJA";
    }

    return 0;
}
