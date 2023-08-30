#include <algorithm>
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    cin >> str;
    int cnt = 0;

    for (int i = 0; i <= str.length(); i++)
    {
        if (str[i] == 'X')
        {
            cnt++;
            if(cnt == 4){
                for(int j=i-3;j<=i;j++){
                    str[j] = 'A';
                }
                cnt -= 4;
            }
        }
        else
        {
            if (cnt == 2)
            {
                for (int j = i - 2; j <= i-1; j++)
                {
                    str[j] = 'B';
                }
            }

            if (cnt % 2 != 0)
            {
                cout << -1;
                return 0;
            }
            cnt = 0;
        }
    }
    cout << str;



    return 0;
}
