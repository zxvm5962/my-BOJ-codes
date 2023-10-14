#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str, tmp;
    int n;
    bool flag = true;
    cin >> n;
    cin >> str >> tmp;
    if (str[0] != tmp[0])
    {
        flag = false;
    }
    if (str[n - 1] != tmp[n - 1])
    {
        flag = false;
    }

    int arr[140] = {0}, arr2[140] = {0};

    for (int i = 0; i < n; i++)
    {
        arr[str[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        arr2[tmp[i]]++;
    }
    for (int i = 'a'; i <= 'z'; i++)
    {
        if (arr[i] != arr2[i])
            flag = false;
    }

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            str.erase(str.begin() + i);
            i--;
        }
    }
    for (int i = 0; i < tmp.size(); i++)
    {
        if (tmp[i] == 'a' || tmp[i] == 'e' || tmp[i] == 'i' || tmp[i] == 'o' || tmp[i] == 'u')
        {
            tmp.erase(tmp.begin() + i);
            i--;
        }
    }

    if (str.compare(tmp) != 0)
    {
        flag = false;
    }

    if (flag == false)
        cout << "NO";

    else
        cout << "YES";

    return 0;
}
