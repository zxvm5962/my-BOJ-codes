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
    cin.ignore();
    string str;
    bool flag = true;

    for (int i = 0; i < t; i++)
    {
        getline(cin,str);
        if (str == "Never gonna give you up")
            continue;
        else if (str == "Never gonna let you down")
            continue;
        else if (str == "Never gonna make you cry")
            continue;
        else if (str == "Never gonna run around and desert you")
            continue;
        else if (str == "Never gonna say goodbye")
            continue;
        else if (str == "Never gonna tell a lie and hurt you")
            continue;
        else if (str == "Never gonna stop")
            continue;
        else
            flag = false;
    }

    if (flag == false)
    {
        cout << "Yes";
    }
    else
        cout << "No";

    return 0;
}
